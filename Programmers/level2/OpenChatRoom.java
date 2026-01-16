import java.util.HashMap;
import java.util.LinkedList;
import java.util.Queue;

public class OpenChatRoom {
  public String[] solution(String[] record) {
    String[] answer = {};

    OpenChatManagement openChatManagement = new OpenChatManagement(record);
    
    answer = openChatManagement.getLogMessage();

    return answer;
  }

  class OpenChatManagement {
    HashMap<String, String> uidNickname = new HashMap<>();
    Queue<LogMessage> inOutLog = new LinkedList<>();

    OpenChatManagement(String[] record) {
      for (int i=0; i<record.length; i++) {
        // 상태, 아이디 닉네임 나누기
        String[] info = record[i].split(" ");

        // Enter, Leave, Change에 따라 실행
        switch(info[0]) {
          case "Enter": // 로그메시지 추가 & 이름 변경 체크
            this.inOutLog.add(new LogMessage(info[0], info[1]));
            setUserInfo(info[1], info[2]);
            break;
          case "Leave": // 로그메시지 추가
            this.inOutLog.add(new LogMessage(info[0], info[1]));
            break;
          case "Change": // 이름 변경 체크
            setUserInfo(info[1], info[2]);
            break;
        }
      }
    }

    void setUserInfo(String uid, String nickname) {
      if (uidNickname.containsKey(uid)) {
        uidNickname.replace(uid, nickname);
      } else {
        uidNickname.put(uid, nickname);
      }
    }

    String[] getLogMessage() {
      String[] logMessages = new String[this.inOutLog.size()];

      for (int i=0; i<logMessages.length; i++) {
        logMessages[i] = logMessageToString(this.inOutLog.poll());
      }

      return logMessages;
    }

    String logMessageToString(LogMessage logMessage) {
      return this.uidNickname.get(logMessage.uid) + "님이 " + (logMessage.state.equals("Enter")? "들어왔습니다." : "나갔습니다.");
    }
  }

  class LogMessage {
    String state;
    String uid;

    LogMessage(String state, String uid) {
      this.state = state;
      this.uid = uid;
    }
  }

  public static void main(String[] args) {
    OpenChatRoom func = new OpenChatRoom();

    String[] record = {"Enter uid1234 Muzi", "Enter uid4567 Prodo","Leave uid1234","Enter uid1234 Prodo","Change uid4567 Ryan"};

    func.solution(record);
  }
}
