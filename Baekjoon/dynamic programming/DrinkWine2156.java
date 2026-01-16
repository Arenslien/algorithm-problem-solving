import java.util.Scanner;

public class DrinkWine2156 {
  public static void main(String[] args) {
    // 0. 초기 변수 초기화
    Scanner sc = new Scanner(System.in);
    int n;
    int[] wine, result;

    // 1. 초기 입력 & 변수 초기화
    n = sc.nextInt();
    wine = new int[n+1]; result = new int[n+1];
    for (int i=1; i<=n; i++) wine[i] = sc.nextInt();

    // 2. 포도주 점화식 계산
    result[1] = wine[1];
    if (n > 1) result[2] = wine[1] + wine[2];
    
    for (int i=3; i<=n; i++) {
      int case1 = result[i-3] + wine[i-1] + wine[i]; // XOO
      int case2 = result[i-2] + wine[i]; // OXO
      int case3 = result[i-1]; // OOX
      result[i] = case1 > case2? (case1 > case3? case1:case3):(case2 > case3? case2:case3);
    }

    // 3. 최종 결과 출력
    System.out.println(result[n]);
    sc.close();
  }
}
