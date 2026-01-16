class RecommendNewId {
  public String solution(String new_id) {
    String answer = "";

    IDGenerator generator = new IDGenerator(new_id);
    answer = generator.generateNewId();

    return answer;
  }

  class IDGenerator {
    String id;
    int idLength = 0;
    IDGenerator(String id) {
      this.id = id;
      this.idLength = id.length();
    }

    void upperToLowerCase() {
      this.id = id.toLowerCase();
    }

    void removeInvalidCharacter() {
      this.id = this.id.replaceAll("[^a-z0-9\\-\\_\\.]", "");
    }

    void removeMultiPeriod() {
      this.id = this.id.replaceAll("\\.+", ".");
    }

    void removeSidePeriod() {
      if (this.id.length() != 0 && this.id.charAt(0) == '.') {
        this.id = this.id.substring(1, this.id.length());
      }
      if (this.id.length() != 0 && this.id.charAt(this.id.length() - 1) == '.') {
        this.id = this.id.substring(0, this.id.length() - 1);
      }
    }

    void emptyString() {
      if (this.id.isEmpty()) {
        this.id = "a";
      } 
    }

    void removeExceededString() {
      if (this.id.length() >= 16) {
        this.id = this.id.substring(0, 15);
      }
    }

    void addExtraString() {
      while (this.id.length() <= 2) {
        char lastChar = this.id.charAt(this.id.length() - 1);
        this.id += lastChar;
      }
    }

    String generateNewId() {
      upperToLowerCase();
      removeInvalidCharacter();
      removeMultiPeriod();
      removeSidePeriod();
      emptyString();
      removeExceededString();
      removeSidePeriod();
      addExtraString();
      return this.id;
    }
  }

  public static void main(String[] args) {
    RecommendNewId func = new RecommendNewId();

    String new_id = "...!@BaT#*..y.abcdefghijklm";
    String new_id2 = "z-+.^.";
    String new_id3 = "=.=";
    String new_id4 = "123_.def";
    String new_id5 = "abcdefghijklmn.p";
    String new_id6 = "__--..alsdjfhSLDFJKH12392oqe!#~!^#--//__";
    // __--.alsdjfhsld

    String answer = func.solution(new_id5);
    System.out.println(answer);
  }
}