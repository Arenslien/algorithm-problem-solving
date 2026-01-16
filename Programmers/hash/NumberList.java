import java.util.ArrayList;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class NumberList {
  public boolean solution(String[] phone_book) {
    boolean answer = true;


    // 어떤 번호가 다른 번호의 접두어인 경우가 있으면 false






    return answer;
  }

  class PrefixTree {
    Node[] topNodes = {new Node("0"), new Node("1"), new Node("2"), new Node("3"), new Node("4"), new Node("5"), new Node("6"), new Node("7"), new Node("8"), new Node("9")};
    int height = 0;

    void addNode(Node node) {
      // 새로운 노드 value의 첫 번째 자리 수에 맞게 추가
      int index = Integer.parseInt(Character.toString(node.value.charAt(0)));
      topNodes[index].addChildNode(node);
    }
  }

  class Node {
    String value;
    ArrayList<Node> children = new ArrayList<>();

    Node(String value) {
      this.value = value;
    }

    void addChildNode(Node node) {
      ArrayList<Node> changedChildren = new ArrayList<>();
      Node newNode = new Node(node.value);

      // 각각의 Node 체크
      for (int i=0; i<children.size(); i++) {
        // 1. 새로 추가될 노드가 접두어일 때
        if (checkPrefix(children.get(i), node)) {
          newNode.children.add(children.get(i));
        }
        // 2. 기존의 노드가 접두어일 때
        else if (checkPrefix(node, children.get(i))) {

        }
        // 3. 둘 다 접두어가 아닐 때
        else {
          changedChildren.add(node);
        }
      }
      children = changedChildren;






      // 아무 것도 없을 경우 바로 추가
      children.add(node);
    }

    boolean checkPrefix(Node prefixNode, Node checkedNode) { // 
      String regex = "^" + prefixNode.value;
      Pattern p = Pattern.compile(regex);
      Matcher m = Pattern.matches(regex, checkedNode.value);
      return m.matches();
    }
  }
}
