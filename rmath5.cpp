#include <iostream>
#include <cmath>
#include <iomanip>

double a, b, ans;

int main() {
    while (std::cin >> a) {
        b = a * a;
        ans = round(b * 10) / 10.0;
        
        std::cout << std::fixed;
        std::cout.precision(1);
        std::cout << ans << std::endl;
        
        a = 0;
        b = 0;
    }
    return 0;
}