import java.util.ArrayList;

class ReportResult {
  public int[] solution(String[] id_list, String[] report, int k) {
    int[] answer = new int[id_list.length];
    User[] userList = new User[id_list.length];

    for (int i=0; i<id_list.length; i++) {
      userList[i] = new User(id_list[i]);
    }

    // 신고 결과 반영하기
    for (int i=0; i<report.length; i++) {
      // 1. 신고 결과 전처리
      String id = report[i].split(" ")[0];
      String reported_id = report[i].split(" ")[1];
      
      // 2. 유저 정보 업데이트 - 유저가 신고한 ID
      for (int j=0; j<userList.length; j++) {
        // userList 돌면서 신고한 유저 ID 찾기

        if (userList[j].id.equals(id)) {
          // 이미 유저가 신고 안했던 ID일 때 추가
          if (!userList[j].report_id.contains(reported_id)) {
            userList[j].report_id.add(reported_id);
            // 신고한 유저에 대한 횟수 카운팅
            for (int l=0; l<userList.length; l++) {
              if (userList[l].id.equals(reported_id)) {
                userList[l].report_count++;
                break;
              }
            }
            break;
          }
          break;
        }
      }      
    }

    // 3. 결과 반환
    for (int i=0; i<userList.length; i++) {
      // 유저가 신고한 ID가 k보다 큰지 확인
      for (int j=0; j<userList[i].report_id.size(); j++) {
        for (int l=0; l<userList.length; l++) {
          if (userList[l].id.equals(userList[i].report_id.get(j))) {
            if (userList[l].report_count >= k) {
              answer[i]++;
            }
          }

        }
      }
    }

    return answer;
  }

  class User {
    String id;
    ArrayList<String> report_id = new ArrayList<String>();
    int report_count = 0;

    User(String id) {
      this.id = id;
    }
  }
}