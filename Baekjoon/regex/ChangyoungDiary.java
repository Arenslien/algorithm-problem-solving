import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class ChangyoungDiary {
  public static void main(String[] args) {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    String origin = "";
    try {
      String line = br.readLine();
      
      for (int i=0; i<line.length(); i++) {
        String s = Character.toString(line.charAt(i));
        if (s.replaceAll("[aeiou]", "").isEmpty()) {
          origin += s;
          i+=2;
        } else {
          origin += s;
        }
      }
      bw.write(origin);
      bw.flush();

    } catch (IOException e) {
      e.printStackTrace();
    }
  }
}
