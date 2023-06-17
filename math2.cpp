#include <iostream>
#include <iomanip>

int main() {
  long long int innum;
  float bansu = 1.6;
  double ans;
  
  while (std::cin >> innum) {
    ans = bansu * innum;
    std::cout << std::fixed << std::setprecision(1) << ans << std::endl;
  }
  
  return 0;
}