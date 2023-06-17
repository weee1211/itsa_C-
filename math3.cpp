#include <iostream>

int main() {
  long long int x, y;

  while (std::cin >> x >> y) {
    int pre_radius = 10000;
    long long int new_radius = (x * x) + (y * y);

    if (new_radius < pre_radius)
      std::cout << "inside" << std::endl;
    else
      std::cout << "outside" << std::endl;
  }

  return 0;
}