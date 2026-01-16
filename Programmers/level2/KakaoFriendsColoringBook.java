public class KakaoFriendsColoringBook {
  public int[] solution(int m, int n, int[][] picture) {
    SearchAlgorithm searchAlgorithm = new SearchAlgorithm(m, n, picture);

    int[] answer = searchAlgorithm.getAnswer();

    System.out.println(answer[0]);
    System.out.println(answer[1]);

    return answer;
  }

  class SearchAlgorithm {
    int m;
    int n;
    int[][] picture;
    boolean[][] check;
    int numberOfArea;
    int maxSizeOfOneArea = 0;

    SearchAlgorithm(int m, int n, int[][] picture) {
      this.m = m; this.n = n;
      this.picture = picture;
      this.check = new boolean[m][n];
      this.numberOfArea = n * m;
    }

    int checkArea(int x, int y) {
      int rightCnt = 0;
      int downCnt = 0;
      int leftCnt = 0;
      int upCnt = 0;

      // 현재 위치 체크
      System.out.println("("+x+", "+y+")");
      this.check[x][y] = true;

      // 무색 영역 패스
      if (this.picture[x][y] == 0) {
        this.numberOfArea--;
        return 0;
      } else {
        // 오른쪽 방향 탐색
        if (y+1 <= this.n-1 && !this.check[x][y+1] && this.picture[x][y] == this.picture[x][y+1]) {
          rightCnt = checkArea(x, y+1);
          this.numberOfArea--;
        }

        // 아래 방향 탐색
        if (x+1 <= this.m-1 && !this.check[x+1][y] && this.picture[x][y] == this.picture[x+1][y]) {
          downCnt = checkArea(x+1, y);
          this.numberOfArea--;
        }

        // 왼쪽 방향 탐색
        if (y-1 >= 0 && !this.check[x][y-1] && this.picture[x][y] == this.picture[x][y-1]) {
          leftCnt = checkArea(x, y-1);
          this.numberOfArea--;
        }

        // 윗 방향 탐색
        if (x-1 >= 0 && !this.check[x-1][y] && this.picture[x][y] == this.picture[x-1][y]) {
          downCnt = checkArea(x-1, y);
          this.numberOfArea--;
        }
      }

      return rightCnt + downCnt + leftCnt + upCnt + 1;
    }

    int[] getAnswer() {
      int[] answer = new int[2];

      for (int i=0; i<this.m; i++) {
        for (int j=0; j<this.n; j++) {
          if (!this.check[i][j]) {
            int areaSize = checkArea(i, j);
            if (this.maxSizeOfOneArea < areaSize) {
              this.maxSizeOfOneArea = areaSize;
            }
            
          }          
        }
      }

      answer[0] = this.numberOfArea;
      answer[1] = this.maxSizeOfOneArea;
      return answer;
    }
  }

  public static void main(String[] args) {
    KakaoFriendsColoringBook func = new KakaoFriendsColoringBook();
    
    int m = 6;
    int n = 4;
    int[][] picture = {{1, 1, 1, 0}, {1, 2, 2, 0}, {1, 0, 0, 1}, {0, 0, 0, 1}, {0, 0, 0, 3}, {0, 0, 0, 3}};
    // 1 1 1 0
    // 1 2 2 0
    // 1 0 0 1
    // 0 0 0 1
    // 0 0 0 3
    // 0 0 0 3
    func.solution(m, n, picture);
  }
}
