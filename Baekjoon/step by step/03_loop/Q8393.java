import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Q8393 {
  public static void main(String[] args) {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    int sum = 0;
    try {
      int n = Integer.parseInt(br.readLine());

      for(int i=0; i<n; i++) {
        sum += i+1;
      }

      System.out.print(sum);
    } catch (IOException e) {
      e.printStackTrace();
    }
  }
}
