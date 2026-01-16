import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.Collections;

public class VillageForemanInvitation9237 {
  
  public static void main(String[] args) throws IOException{
    // 0. 변수 초기화 & 준비
    BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));


    // 1. 입력
    int N = Integer.parseInt(bf.readLine());
    Integer[] periods = new Integer[N];
    String[] tokens = bf.readLine().split(" ");
    int result = 0;
    
    for (int i=0; i<N; i++)
      periods[i] = Integer.parseInt(tokens[i]);
    
    // 2. 알고리즘 구현
    Arrays.sort(periods, Collections.reverseOrder());
    
    for (int today=1; today<=N; today++) {
      int temp = today + periods[today-1] + 1;
      result = result < temp? temp:result;
    }

    // 3. 결과 출력
    System.out.println(result);

    bf.close();
  }
}