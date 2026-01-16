import java.util.Stack;

public class CraneClawMachine {
  public static void main(String[] args) {
    CraneClawMachine class1 = new CraneClawMachine();

    int[][] board = {
      {0,0,0,0,0},{0,0,1,0,3},{0,2,5,0,1},{4,2,4,4,2},{3,5,1,3,1}
    };
    int[] moves = {1,5,3,5,1,2,1,4};
  }

  public int solution(int[][] board, int[] moves) {
    int answer = 0;

    ClawMachine clawMachine = new ClawMachine(board, moves);
    for (int i=0; i<moves.length; i++) {
      int doll = clawMachine.pullDoll(moves[i]);
      if (doll != 0) clawMachine.pushDoll(doll);
    }

    answer = clawMachine.cnt;

    return answer;
  }

  class ClawMachine {
    int[][] board;
    
    Stack<Integer> basket = new Stack<Integer>();
    int cnt = 0;

    ClawMachine(int [][] board, int[] moves) {
      this.board = board; 
    }

    int pullDoll(int move) {
      int doll = 0;

      for (int i=0; i<board.length; i++) {
        if (this.board[i][move-1] != 0) {
          doll = this.board[i][move-1];
          this.board[i][move-1] = 0;
          break;
        }
      }

      return doll;
    }

    void pushDoll(int doll) {
      if (this.basket.empty()) this.basket.push(doll);
      else {
        if (this.basket.peek() == doll) {
          this.basket.pop();
          cnt += 2;
        } else {
          this.basket.push(doll);
        }
      }
    }
  }
}