import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class TakeAGroupPhoto {
  public int solution(int n, String[] data) {
    int answer = 0;

    Algorithm algorithm = new Algorithm(n, data);
    answer = algorithm.getAnswer();

    return answer;
  }

  class Algorithm {
    int n;
    String[] data;
    String[] friends = {"A", "C", "F", "J", "M", "N", "R", "T"};

    Algorithm(int n, String[] data) {
      this.n = n; this.data = data;
    }

    // 조건 data가 입력되면 해당 조건에 대한 
    // 정규 표현식을 반환해주는 함수
    String[] dataToRegex(String data) {
      String[] regex = new String[2];

      String friend1 = Character.toString(data.charAt(0));
      String friend2 = Character.toString(data.charAt(2));
      String expr = Character.toString(data.charAt(3));
      int number = Integer.parseInt(Character.toString(data.charAt(4)));

      switch (expr) {
        case "=":
          regex[0] = friend1 + friend2;
          regex[1] = friend2 + friend1;
          break;
        case ">":
          regex[0] = friend1 + "[A-Z]{" + (number+1) + ",6}" + friend2;
          regex[1] = friend2 + "[A-Z]{" + (number+1) + ",6}" + friend1;
          break;
        case "<":
          regex[0] = friend1 + "[A-Z]{0," + (number-1) + "}" + friend2;
          regex[1] = friend2 + "[A-Z]{0," + (number-1) + "}" + friend1;
          break;
      }

      return regex;
    }

    String[][] dataToAllRegex(String[] data) {
      String[][] regex = new String[data.length][2];

      for (int i=0; i<data.length; i++) {
        String[] temp = dataToRegex(data[i]);
        regex[i][0] = temp[0];
        regex[i][1] = temp[1];
      }

      return regex;
    }




    boolean checkPosition(String position, String[][] AllRegex) {
      boolean result = true;
      for(int i=0; i<AllRegex.length; i++) {

        Pattern p1 = Pattern.compile(AllRegex[i][0]);
        Pattern p2 = Pattern.compile(AllRegex[i][1]);
  
        Matcher m1 = p1.matcher(position);
        Matcher m2 = p2.matcher(position);
        
        boolean b1 = m1.find();
        boolean b2 = m2.find();

        result = result && (b1 || b2);
      }

      return result;
    }

    boolean isRightPosition(String position) {
      boolean result = true;

      boolean[] isUsed = new boolean[8];
      for (int i=0; i<8; i++) {
        for (int j=0; j<8; j++) {
          if (friends[j].equals(Character.toString(position.charAt(i)))) {
            isUsed[j] = true;
          }
        }
      }

      for (int i=0; i<8; i++) {
        result = (result && isUsed[i]);
      }

      return result;
    }


    int getAnswer() {
      int answer = 0;

      String[][] allRegex = dataToAllRegex(data);

      for (int i1=0; i1<8; i1++) {
        for (int i2=0; i2<8; i2++) {
          for (int i3=0; i3<8; i3++) {
            for (int i4=0; i4<8; i4++) {
              for (int i5=0; i5<8; i5++) {
                for (int i6=0; i6<8; i6++) {
                  for (int i7=0; i7<8; i7++) {
                    for (int i8=0; i8<8; i8++) {
                      String position = "";
                      
                      // Position 생성
                      position += friends[i1] + friends[i2] + friends[i3] + friends[i4] + friends[i5] + friends[i6] + friends[i7] +  friends[i8];

                      if (!isRightPosition(position)) {
                        continue;
                      }

                      // Position에 Regex 적용
                      if (checkPosition(position, allRegex)) {
                        answer++;
                      }
                    }
                  }
                }
              }
            }
          }
        }  
      }

      return answer;
    }
  }


  public static void main(String[] args) {
    TakeAGroupPhoto class1 = new TakeAGroupPhoto();
    int n = 2;
    String[] data = {"N~F=0", "R~T>2"};
    class1.solution(n, data);
  }
}
