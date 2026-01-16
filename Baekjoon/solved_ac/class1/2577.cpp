// 2577: 숫자의 개수

# include <iostream>
# include <string>

int main() {
  int cnt_list[10] = {0, };
  int num = 1;

  for (int i=0; i<3; i++) {
    int input_num;
    std::cin >> input_num;
    num *= input_num;
  }
  
  std::string str_num = std::to_string(num);
  for (char c : str_num) {
    cnt_list[c - '0']++;
  }

  for (int i=0; i<10; i++) {
    std::cout << cnt_list[i] << std::endl;
  }  

  return 0;
}