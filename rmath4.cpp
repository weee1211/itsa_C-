#include <iostream>

int a, b;

int main() {
    while (std::cin >> a >> b) {
        std::cout << a << "+" << b << "=" << a + b << std::endl;
        std::cout << a << "*" << b << "=" << a * b << std::endl;
        std::cout << a << "-" << b << "=" << a - b << std::endl;
        
        if (a % b < 0) {
            std::cout << a << "/" << b << "=" << (a / b - 1) << "..." << (a % b + b) << std::endl;
        } else {
            std::cout << a << "/" << b << "=" << (a / b) << "..." << (a % b) << std::endl;
        }
        
        a = 0;
        b = 0;
    }
    return 0;
}