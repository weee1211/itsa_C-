#include <iostream>

int a, b;

int main() {
    while (std::cin >> a >> b) {
        if (a <= 100 && b <= 100) {
            std::cout << "inside" << std::endl;
        } else {
            std::cout << "outside" << std::endl;
        }
    }
    return 0;
}