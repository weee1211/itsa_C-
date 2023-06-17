#include <iostream>

int main() {
    int a, b;
    while (std::cin >> a >> b) {
        std::cout << a + b << std::endl;
        a = 0;
        b = 0;
    }
    return 0;
}