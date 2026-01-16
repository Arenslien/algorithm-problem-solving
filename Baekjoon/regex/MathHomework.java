import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.math.BigInteger;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class MathHomework {
  public static void main(String[] args) {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    BigInteger[] array = new BigInteger[5000];
    int M = 0;

    try {
      int N = Integer.parseInt(br.readLine());

      // N번 만큼 반복
      for (int i=0; i<N; i++) {
        String input = br.readLine();
        String regex = "\\d+";
        Pattern pattern = Pattern.compile(regex);
        Matcher matcher = pattern.matcher(input);

        while (matcher.find()) {
          String number = matcher.group(0);

          // 0으로 시작하는 숫자라면 0 지우기
          if (Pattern.matches("0+", number)) {
            number = "0";
          } else {
            number = number.replaceAll("^0+", ""); //^가 대괄호 안에 있지 않고 홀로 있으면 라인의 시작을 뜻함
          }
          
          // array에 입력한 숫자 담기
          array[M++] = new BigInteger(number);
        }
      }

      // 버블 정렬 알고리즘
      for (int i=0; i<M-1; i++) {
        for (int j=0; j<M-i-1; j++) {
          if (array[j].compareTo(array[j+1]) == 1) {
            BigInteger temp = array[j];
            array[j] = array[j+1];
            array[j+1] = temp;
          }
        }
      }

      // 최종 출력
      for (int i=0; i<M; i++) {
        System.out.println(array[i].toString());
      }

    } catch (IOException e) {
      e.printStackTrace();
    }
  }
}
