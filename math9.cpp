#include <iostream>

int main() {
  int num, sum = 0;
  std::cin >> num;

  for (int i = 1; i <= num; i++) {
    if (i % 3 == 0) {
      sum += i;
    }
  }

  std::cout << sum << std::endl;
  return 0;
}