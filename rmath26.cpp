#include <iostream>

int a;

int main() {
    while (std::cin >> a) {
        for (int i = 1; i <= a; i++) {
            std::cout << i << "*" << i << "=" << static_cast<long long int>(i) * i << std::endl;
        }
    }

    return 0;
}