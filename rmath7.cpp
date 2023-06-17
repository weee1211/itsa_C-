#include <iostream>

int main() {
    int ans;
    while (std::cin >> ans) {
        int ans1 = ans * ans;
        int ans2 = ans * ans * ans;
        std::cout << ans << " " << ans1 << " " << ans2 << std::endl;
    }
    return 0;
}