#include <iostream>

int powpow(int tmp) {
    int ans = tmp * tmp * tmp;
    return ans;
}

int main() {
    int a, b, c, d;
    while (std::cin >> a) {
        int total = a;

        b = a / 100;
        c = (a % 100) / 10;
        d = a % 10;
        b = powpow(b);
        c = powpow(c);
        d = powpow(d);
        if (b + c + d == total) {
            std::cout << "Yes" << std::endl;
        } else {
            std::cout << "No" << std::endl;
        }
    }
    return 0;
}





