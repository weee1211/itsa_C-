#include <iostream>

int main() {
  int n;
  
  while (std::cin >> n) {
    if (3 <= n && n <= 5) {
      std::cout << "Spring" << std::endl;
    }
    if (6 <= n && n <= 8) {
      std::cout << "Summer" << std::endl;
    }
    if (9 <= n && n <= 11) {
      std::cout << "Autumn" << std::endl;
    }
    if (12 == n || n <= 2) {
      std::cout << "Winter" << std::endl;
    }
  }

  return 0;
}