#include <iostream>

int main() {
  unsigned int a, b, r;
  std::cin >> a >> b;

  while (b != 0) {
    r = a % b;
    a = b;
    b = r;
  }

  std::cout << a << std::endl;
  return 0;
}