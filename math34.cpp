#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iomanip>
int main() {
    int high, m;
    double tw;
    while (std::cin >> high >> m) {
        if (m == 1) {
            tw = (high - 80) * 0.7;
            std::cout << std::fixed << std::setprecision(1) << tw << std::endl;
        } else {
            tw = (high - 70) * 0.6;
            std::cout << std::fixed << std::setprecision(1) << tw << std::endl;
        }
    }
    return 0;
}