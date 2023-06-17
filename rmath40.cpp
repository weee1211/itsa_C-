#include <iostream>

int main() {
    int a;
    while (std::cin >> a) {
        int total = 0;
        for (int i = a; i > 0; i--) {
            total += i;
        }
        for (int i = 1; i < a; i++) {
            std::cout << i << " + ";
        }
        std::cout << a << " = " << total << std::endl;
    }
    return 0;
}