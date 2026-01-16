import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class Q10950 {
  public static void main(String[] args) {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    try {
      int T = Integer.parseInt(br.readLine());
      for (int i=0; i<T; i++) {
        String[] inputData = br.readLine().split(" ");
        System.out.println(Integer.parseInt(inputData[0]) + Integer.parseInt(inputData[1]));
      }
      
      br.close();
    } catch (IOException e) {
      e.printStackTrace();
    }
    
  }
}