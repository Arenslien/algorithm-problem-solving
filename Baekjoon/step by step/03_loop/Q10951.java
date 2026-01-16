import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Q10951 {
  public static void main(String[] args) {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in)); 
    BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    try {
      while (true) {
        String line = br.readLine();
  
        if (line == null) break;
        
        String[] AB = line.split(" ");
        
        bw.write((Integer.parseInt(AB[0]) + Integer.parseInt(AB[1])) + "\n");
      }

      bw.flush();
    } catch (IOException e) {
      e.printStackTrace();
    }
  }
}
