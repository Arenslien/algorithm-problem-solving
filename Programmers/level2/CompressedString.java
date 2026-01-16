public class CompressedString {
  public int solution(String s) {
    int answer = s.length();

    Compressor compressor = new Compressor(s);
    // 문자열의 길이 X : 1 ~ 1000 -> 패턴 압축은 X/2가 최대
    for (int i=1; i<=s.length()/2; i++) {
      // 1. 문자열 자르기
      String[] pieces = compressor.splitString(i);

      // 2. 문자열 압축하기
      String compressedString = compressor.compressString(pieces);
      // System.out.println(compressedString);

      // 3. 압축 길이 비교
      // System.out.println(compressedString.length());
      if (answer > compressedString.length()) {
        answer = compressedString.length();
      }      
    }
    System.out.println(answer);
    
    return answer;
  }

  class Compressor {
    String str;

    Compressor(String str) { this.str = str; }

    String[] splitString(int unit) {
      // 나눈 문자열들을 저장할 배열 선언
      String[] pieces = new String[str.length()/unit + (str.length()%unit != 0 ? 1:0)];

      // aab bac cc 

      // 문자열 나누기
      for (int i=0; i<str.length()/unit; i++) {
        pieces[i] = str.substring(i*unit, i*unit + unit);
      }
      
      if (str.length()%unit != 0) {
        pieces[str.length()/unit] = str.substring(str.length()-(str.length()%unit), str.length());
      }

      // for (int i=0; i<pieces.length; i++) {
      //   System.out.print("["+pieces[i]+"] ");
      // }
      // System.out.println();

      return pieces;
    }

    String compressString(String[] pieces) {
      String compressedString = "";

      int cnt = 1;
      // aa bb ac cc
      for (int i=0; i<pieces.length-1; i++) {
        if (pieces[i].equals(pieces[i+1])) {
          cnt++;
        } else {
          compressedString += (cnt == 1? "" : cnt) + pieces[i];
          cnt = 1;
        }
      }
      compressedString += (cnt == 1? "" : cnt) + pieces[pieces.length - 1];

      return compressedString;
    }
  }

  public static void main(String[] args) {
    CompressedString class1 = new CompressedString();
    class1.solution("xababcdcdababcdcd");
  }
}