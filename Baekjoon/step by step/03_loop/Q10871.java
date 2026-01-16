import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Q10871 {
  public static void main(String[] args) {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    try {
      String[] input = br.readLine().split(" ");
      int N = Integer.parseInt(input[0]);
      int X = Integer.parseInt(input[1]);

      String[] numbers = br.readLine().split(" ");
      for (String number : numbers) {
        int n = Integer.parseInt(number); 
        if(n < X) {
          bw.write(n + " ");
        }
      }

      bw.flush();
    } catch (IOException e) {
      e.printStackTrace();
    }

  }
}
