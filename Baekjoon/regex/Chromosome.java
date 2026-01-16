import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class Chromosome {
  public static void main(String[] args) {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    try {
      int T = Integer.parseInt(br.readLine());
      for (int i=0; i<T; i++) {
        String line = br.readLine();
        String regex = "[A-F]?A+F+C+[A-F]?";
        Pattern pattern = Pattern.compile(regex);
        Matcher matcher = pattern.matcher(line);
        // boolean b = Pattern.matches(regex, line);

        if (matcher.matches()) {
          bw.write("Infected!"+"\n");
        } else {
          bw.write("Good"+"\n");
        }
      }
      bw.flush();

    } catch (IOException e) {
      e.printStackTrace();
    }
  }
}
