import java.io.IOException;
import java.util.HashMap;
import java.util.Scanner;

public class IsThisATree6416 {
  public static void main(String[] args) throws IOException {
    // BufferedReader & Scanner & StringBuilder 선언
    Scanner sc = new Scanner(System.in);

    // 전체 테스트 케이스에 대한 반복
    for (int i=1; true; i++) {
      // 0. 변수 선언
      HashMap<Integer, Integer> nodes = new HashMap<>();
      boolean existBadNode = true;
      boolean isTree = false;
      int rootCnt = 0;
      int edgeCnt = 0;

      // 1. 입력값 받은 후 노드 관계 추가
      while(true) {
        // 1.1 노드 u, v 입력 받기
        int u = sc.nextInt();
        int v = sc.nextInt();

        // 1.2 u,v 값이 종료 조건 : 끝
        if (u == -1 && v == -1) {
          sc.close();
          return;
        }
          
        else if (u == 0 && v == 0) break;

        nodes.put(u, nodes.getOrDefault(u, 0));
        nodes.put(v, nodes.getOrDefault(v, 0)+1);
        edgeCnt++;
      }

      // 2. 트리 판별하기      
      for (Integer key : nodes.keySet()) {
        if (nodes.get(key) == 0) {
          rootCnt++;
        } else if (nodes.get(key) > 1) {
          existBadNode = false;
          break;
        }
      }

      // isTree 판별
      if (nodes.size() == 0) {
        isTree = true;
      } else if (existBadNode && rootCnt == 1 && edgeCnt == nodes.size() - 1) {
        isTree = true;
      } else {
        isTree = false;
      }
      
      // 3. 출력값 writing
      if (isTree) {
        System.out.println("Case " + i + " is a tree.");
      } else {
        System.out.println("Case " + i + " is not a tree.");
      }
    }
  }
}