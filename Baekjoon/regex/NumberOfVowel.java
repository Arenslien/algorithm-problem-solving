import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

class NumberOfVowel {
  public static void main(String[] args) {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
    try {
      while (true) {
        // 변수 선언
        int cnt = 0; // 모음 개수 카운팅

        // 라인 입력 받기
        String line = br.readLine().toLowerCase(); 

        // #일 경우 끝
        if (line.equals("#")) break;

        // 문장 안에 모음 있는지 체크
        for (int i=0; i<line.length(); i++) {
          String s = Character.toString(line.charAt(i));
          if (s.replaceAll("[aeiou]", "").isEmpty()) {
            cnt++;
          }
        }

        // 모음 개수 write
        bw.write(cnt+"\n");
      }

      // 전체 모음 개수 출력
      bw.flush();
    } catch(IOException e) {
      e.printStackTrace();
    }

  }
}