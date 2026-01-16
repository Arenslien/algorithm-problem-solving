# 3033: 킹, 퀸, 룩, 비숍, 나이트, 폰

chess_piece_cnt = (1, 1, 2, 2, 2, 8)

for idx, piece_cnt in enumerate(map(int, input().split())):
  print(chess_piece_cnt[idx] - piece_cnt, end=" ")