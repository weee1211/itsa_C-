#include <iostream>

long long int a;

int main() {
    while (std::cin >> a) {
        long long int ans = 1;

        while (a > 0) {
            ans *= a;
            a--;
        }

        std::cout << ans << std::endl;
    }

    return 0;
}