public class PlusNonexistedNumber {
  public static void main(String[] args) {
    PlusNonexistedNumber func = new PlusNonexistedNumber();

    int[] numbers = {1, 2, 3, 4, 5, 6 };
  }
  public int solution(int[] numbers) {
    int answer = 0;

    boolean[] exist = new boolean[10];

    for (int i=0; i<numbers.length; i++) {
      exist[numbers[i]] = true;
    }
    
    for (int i=0; i<exist.length; i++) {
      if (exist[i] == false) {
        answer += i;
      }
    }


    return answer;
  }
}