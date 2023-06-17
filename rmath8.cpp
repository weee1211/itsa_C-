#include <iostream>

int main() {
    int a, b;
    while (std::cin >> a >> b) {
        int ans = (a + b) * (a + b);
        std::cout << ans << std::endl;
    }
    return 0;
}