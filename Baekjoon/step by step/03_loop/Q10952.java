import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Q10952 {
  public static void main(String[] args) {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in)); 
    BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    try {
      while (true) {
        String[] AB = br.readLine().split(" ");
  
        if (AB[0].equals("0") && AB[1].equals("0")) break;
  
        bw.write((Integer.parseInt(AB[0]) + Integer.parseInt(AB[1])) + "\n");
      }

      bw.flush();
    } catch (IOException e) {
      e.printStackTrace();
    }
  }
}
