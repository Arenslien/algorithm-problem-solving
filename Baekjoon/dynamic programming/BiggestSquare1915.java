import java.util.Scanner;

public class BiggestSquare1915 {
  public static void main(String[] args) {
    // 변수 선언
    Scanner sc = new Scanner(System.in);
    int max = 0;
    
    // 1. 입력 받기
    String firstLine = sc.nextLine();
    int n = Integer.parseInt(firstLine.split(" ")[0]);
    int m = Integer.parseInt(firstLine.split(" ")[1]);

    int[][] array = new int[n+1][m+1];

    for (int i=0; i<n; i++) {
      String line = sc.nextLine();
      String[] lineToken = line.split("");
      for (int j=0; j<m; j++) {
        array[i][j] = Integer.parseInt(lineToken[j]);
      }
    }

    // 2. 맨 끝에서부터 Counting
    for (int i=n-1; i>=0; i--) {
      for (int j=m-1; j>=0; j--) {
        if (array[i][j] == 0) continue;
        else {
          int one = array[i][j+1];
          int two = array[i+1][j+1];
          int three = array[i+1][j];

          int min = min(one, two, three);
          
          array[i][j] = min + 1;
          if (min+1 > max) max = min+1;
        }
      }
    }

    System.out.println(max*max);

    sc.close();
    return;
  }

  public static int min(int one, int two, int three) {
    return one<two? (one<three? one:three):(two < three? two:three);
  }
}
