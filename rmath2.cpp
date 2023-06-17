#include <iostream>
#include <iomanip>

int main() {
    double a, b, ans;

    while (std::cin >> a >> b) {
        ans = (a * b) / 2;
        std::cout << std::fixed << std::setprecision(1) << ans << std::endl;
        a = 0, b = 0, ans = 0;
    }

    return 0;
}