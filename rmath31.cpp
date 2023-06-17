#include <iostream>

int main() {
    int a;
    while (std::cin >> a) {
        int ans = 0;
        for (int i = 1; i <= a; i++) {
            if (i % 2 == 0 && i % 3 == 0 && i % 12 != 0) {
                ans += i;
            }
        }
        std::cout << ans << std::endl;
    }
    return 0;
}