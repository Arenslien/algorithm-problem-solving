import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.Collections;

public class Treasure1026 {
  public static void main(String[] args) throws IOException{
    BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));

    // 0. 변수 초기화 준비
    int sum = 0;

    // 1. 입력
    int N = Integer.parseInt(bf.readLine());
    int[] A = new int[N];
    Integer[] B = new Integer[N];
    
    String[] tokens = bf.readLine().split(" ");
    for (int i = 0; i < N; i++)
      A[i] = Integer.parseInt(tokens[i]);
    tokens = bf.readLine().split(" ");
    for (int i = 0; i < N; i++)
      B[i] = Integer.parseInt(tokens[i]);

    // 2. A[] 배열 재정렬, B[] 배열 재정렬
    Arrays.sort(A); // 오름차순
    Arrays.sort(B, Collections.reverseOrder());

    // 3. 각 곱의 합 구하기
    for (int i=0; i<N; i++)
      sum += A[i] * B[i];

    // 4. 결과 출력
    System.out.println(sum);

    bf.close();
  }
}
