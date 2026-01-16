import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class GoodInterval1059{
  public static void main(String[] args) throws IOException {
    // BufferedReader
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    // 변수 선언 & 입력
    int L = Integer.parseInt(br.readLine());
    String[] input = br.readLine().split(" ");
    int[] nums = new int[input.length];
    int n = Integer.parseInt(br.readLine());
    int cnt = 0;

    // 원소 변환
    for (int i=0; i<L; i++) {
      nums[i] = Integer.parseInt(input[i]);
    }

    // 1. 주어진 집합 원소 정렬 -> Counting Sort 사용
    int[] sortedArr = countingSort(nums);

    // 2. 좋은 구간 범위 찾기
    int[] interval = getMinMaxOfInterval(sortedArr, n);

    // 3. 좋은 구간 개수 구하기
    if (interval[0] != 0 && interval[1] != 0) {
      cnt = getCountGoodInterval(interval[0], interval[1], n);
    }

    // 4. 결과 출력
    System.out.println(cnt);
    
    br.close();
  }

  private static int[] getMinMaxOfInterval(int[] sortedArr, int n) {
    int[] interval = {0, 0};

    // 길이가 1인 집합을 고려해 양 끝에 0, 1001 구간 추가
    int[] tempArr = new int[sortedArr.length + 2];
    tempArr[0] = 0;
    tempArr[tempArr.length - 1] = 1001;

    for (int i=0; i<sortedArr.length; i++) {
      tempArr[i+1] = sortedArr[i];
    }

    // n이 각 구간 사이에 있는지 확인
    for (int i=0; i<tempArr.length-1; i++) {
      if (tempArr[i] < n && n < tempArr[i+1]) {
        interval[0] = tempArr[i] + 1;
        interval[1] = tempArr[i+1] - 1;
      }
    }

    return interval;
  }


  private static int[] countingSort(int[] inputArr) {
    int[] resultArr = new int[inputArr.length];
    int[] count = new int[1000];

    // 배열의 각 원소의 값 Counting
    for (int i=0; i<inputArr.length; i++) {
      count[inputArr[i]-1]++;
    }

    // count 배열 수정
    for (int i=1; i<count.length; i++) {
      count[i] = count[i] + count[i-1];
    }

    // 정렬
    for (int i=0; i<inputArr.length; i++) {
      resultArr[count[inputArr[i]-1]-1] = inputArr[i];
      count[inputArr[i]-1]--;
    }

    return resultArr;
  }

  private static int getCountGoodInterval(int A, int B, int n) {
    int count = 0;

    if (A == n || B == n) { // n의 값이 구간 양 끝단에 걸릴 경우
      count = B - A;
    } else { // A < n < B인 경우
      count = (n-A+1) * (B-n+1) - 1;
    }

    return count;
  }
}