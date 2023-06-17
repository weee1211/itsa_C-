#include <iostream>
#include <iomanip>

int main() {
    double a, b, c, ans;

    while (std::cin >> a >> b >> c) {
        ans = ((a + b) * c) / 2;
        std::cout << "Trapezoid area:" << std::fixed << std::setprecision(1) << ans << std::endl;
        a = 0, b = 0, c = 0, ans = 0;
    }

    return 0;
}