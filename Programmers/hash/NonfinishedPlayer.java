import java.util.HashMap;
import java.util.Iterator;

public class NonfinishedPlayer {
  public String solution(String[] participant, String[] completion) {
    String answer = "";

    HashMap<String, Integer> players = new HashMap<>();

    for (int i=0; i<participant.length; i++) {
      String name = participant[i];
      if (players.containsKey(name)) {
        players.replace(name, (players.get(name)+1));
      } else {
        players.put(name, 1);
      }
    }

    for (int i=0; i<completion.length; i++) {
      String name = completion[i];
      players.replace(name, (players.get(name)-1));
    }

    Iterator<String> iter = players.keySet().iterator();
    while (iter.hasNext()) {
      String name = iter.next();
      if (players.get(name) == 1) {
        answer = name;
      }
    }
    System.out.println(answer);

    return answer;
  }

  public static void main(String[] args) {
    NonfinishedPlayer class1 = new NonfinishedPlayer();
    String[] participant = {"leo", "kiki", "eden"};
    String[] completion = {"eden", "kiki"};
    class1.solution(participant, completion);
  }
}
