#include <iostream>

int main() {
  int inh, inm, outh, outm, total, ans = 0, flag = 1;

  std::cin >> inh >> inm;
  std::cin.ignore(); // Ignore the newline character
  std::cin >> outh >> outm;

  if (outm < inm) {
    outh -= 1;
    outm += 60;
  }

  total = (60 * (outh - inh)) + (outm - inm);

  if (total < 30) {
    std::cout << "0" << std::endl;
    flag = 0;
  }

  if (total <= 120) {
    ans = 30 * (total / 30);
  } else if (total <= 240) {
    ans += 30 * 4;
    ans += 40 * ((total - 120) / 30);
  } else if (total > 240) {
    ans += 30 * 4;
    ans += 40 * 4;
    ans += 60 * ((total - 240) / 30);
  }

  if (flag == 1) {
    std::cout << ans << std::endl;
  }

  return 0;
}