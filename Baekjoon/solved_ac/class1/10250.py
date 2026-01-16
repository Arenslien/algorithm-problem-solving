# 10250: ACM 호텔

# 1. 테스트 개수 입력
T = int(input())

for i in range(T):
  # 2. 테스트 케이스 입력
  H, W, N = map(int, input().split())

  # 3. 방 배정 알고리즘
  cnt_H = 0
  cnt_W = 1

  for j in range(N):
    if (cnt_H < H):
      cnt_H += 1
    else:
      cnt_H = 1
      cnt_W += 1
  
  # 4. 방 번호 출력
  print(f"{cnt_H}{str(cnt_W).zfill(2)}")