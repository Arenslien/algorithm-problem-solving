public class PressKeyPad {
  public String solution(int[] numbers, String hand) {
    String answer = "";

    MovingAlgorithm movingSystem = new MovingAlgorithm(hand);

    for (int i=0; i<numbers.length; i++) {
      answer += movingSystem.pressKeyPad(Integer.toString(numbers[i]));
    }
    
    return answer;
  }

  class MovingAlgorithm {
    // 키패드와 키패드의 실제 위치

    String[] keypadLocation = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "*", "0", "#"};
    // 0  1  2  | 1 2 3
    // 3  4  5  | 4 5 6
    // 6  7  8  | 7 8 9
    // 9 10 11  | * 0 #

    // 왼쪽, 오른쪽 엄지 손가락 위치
    String left = "*";
    String right = "#";
    String hand;

    MovingAlgorithm(String hand) {
      this.hand = hand;
    }

    int calculateDistance(String startKeypad, String endKeypad) {
      int current = indexOfKeypad(startKeypad);
      int end = indexOfKeypad(endKeypad);
      int distance = 0;

      // 상/하로 이동하는 로직
      while (current/3 != end/3) {
        // 목적지 키패드가 위에 있을 경우
        if (current/3 > end/3) { 
          current -= 3;
        } 
        // 목적지 키패드가 아래 있을 경우
        else { 
          current += 3;
        }
        distance++;
      }

      // 좌/우로 이동하는 로직
      while (current != end) {
        if (current < end) {
          current++;
        } else {
          current--;
        }
        distance++;
      }
      return distance;
    }

    int indexOfKeypad(String keypad) {
      int index = 0;
      for (int i=0; i<keypadLocation.length; i++) {
        if (keypadLocation[i].equals(keypad)) {
          index = i;
          break;
        }
      }
      return index;
    }

    String pressKeyPad(String keypad) {
      String result = "";
      // 1. 어느 손가락 담당 구역인지 확인
      switch(keypad) {
        // 왼손 엄지 손가락 위치일 경우
        case "1":
        case "4":
        case "7":
          this.left = keypad;
          result = "L";
          break;
        // 오른손 엄지 손가락 위치일 경우
        case "3":
        case "6":
        case "9":
          this.right = keypad;
          result = "R";
          break;
        // 가운데 위치일 경우
        default:
          // 두 손가락의 거리 측정 후 더 가까운 손가락 사용
          if (calculateDistance(left, keypad) > calculateDistance(right, keypad)) {
            this.right = keypad;
            result = "R";
          } else if (calculateDistance(left, keypad) < calculateDistance(right, keypad)) {
            this.left = keypad;
            result = "L";
          } else {
            if (this.hand.equals("right")) {
              result = "R";
              this.right = keypad;
            } else {
              result = "L";
              this.left = keypad;
            }
          }
          break;
      }
      
      return result;
    }
  }

  public static void main(String[] args) {
    PressKeyPad func = new PressKeyPad();

    int[] numbers = {1, 3, 4, 5, 8, 2, 1, 4, 5, 9, 5};
    String hand = "right";

    int[] numbers2 = {7, 0, 8, 2, 8, 3, 1, 5, 7, 6, 2};
    String hand2 = "left";

    int[] numbers3 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    String hand3 = "right";

    String answer = func.solution(numbers3, hand3);
    System.out.println(answer);
  }
}
