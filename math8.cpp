#include <iostream>
#include <cmath>

int mySqrt(int dec) {
  if (dec <= 1) return dec;
  unsigned int left = 0, right = dec;

  while (left < right) {
    unsigned int mid = left + (right - left) / 2;
    if (dec / mid >= mid) {
      left = mid + 1;
    } else {
      right = mid;
    }
  }
  return right - 1;
}

int main() {
  int flor, dec;

  while (std::cin >> dec) {
    bool flag = true;
    if (dec == 0 || dec == 1) {
      std::cout << "NO" << std::endl;
      continue;
    }

    flor = mySqrt(dec);
    for (int count = 2; count <= flor; count++) {
      if (dec % count == 0) {
        flag = false;
        std::cout << "NO" << std::endl;
        break;
      }
    }
    if (flag) {
      std::cout << "YES" << std::endl;
    }
  }

  return 0;
}