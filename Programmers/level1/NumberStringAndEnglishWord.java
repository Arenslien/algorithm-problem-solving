public class NumberStringAndEnglishWord {
  public int solution(String s) {
    int answer = 0;

    StringConverter converter = new StringConverter(s);
    answer = converter.convertString();

    return answer;

  }
    
  class StringConverter {
    String s;

    String[] word = {
      "zero", "one", "two", "three", "four",
      "five", "six", "seven", "eight", "nine"
    };


    StringConverter(String s) {
      this.s = s;
    }

    int convertString() {
      for (int i=0; i<10; i++) {
        this.s = this.s.replaceAll(word[i], i+"");
      }
      return Integer.parseInt(this.s);
    }
  }


  public static void main(String[] args) {
    NumberStringAndEnglishWord func = new NumberStringAndEnglishWord();

    String s = "one4seveneight";
    String s2 = "23four5six7";
    String s3 = "2three45sixseven";
    String s4 = "123";

    int answer = func.solution(s4);

    System.out.println(answer);
  }
}
