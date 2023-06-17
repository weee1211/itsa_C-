#include <iostream>

double a;

int main() {
    while (std::cin >> a) {
        int cnt = 0;
        while (a > 0) {
            a -= 0.238;
            cnt++;
        }
        std::cout << cnt << std::endl;
        a = 0;
        cnt = 0;
    }
    return 0;
}