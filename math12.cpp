#include <iostream>

int re(long long int cunt) {
  if (cunt == 0 || cunt == 1)
    return cunt + 1;
  else
    return re(cunt - 1) + re(static_cast<int>(cunt / 2));
}

int main() {
  long long int cunt, ans;
  std::cin >> cunt;
  ans = re(cunt);
  std::cout << ans << std::endl;
  return 0;
}