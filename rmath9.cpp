#include <iostream>

long long int a, ans = 1;

int main() {
    while (std::cin >> a) {
        if (a < 31) {
            for (int i = 1; i <= a; i++) {
                ans = ans * 2;
            }
            std::cout << ans << std::endl;
        } else {
            std::cout << "Value of more than 31" << std::endl;
        }
        a = 0;
        ans = 1;
    }
    return 0;
}