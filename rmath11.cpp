#include <iostream>

int a;

int main() {
    while (std::cin >> a) {
        int ans1 = 0, ans2 = 0, ans3 = 0;
        while (a >= 10) {
            a -= 10;
            ans1++;
        }
        while (a >= 5) {
            a -= 5;
            ans2++;
        }
        while (a > 0) {
            a -= 1;
            ans3++;
        }
        std::cout << "NT10=" << ans1 << std::endl;
        std::cout << "NT5=" << ans2 << std::endl;
        std::cout << "NT1=" << ans3 << std::endl;
    }
    return 0;
}