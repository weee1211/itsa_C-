#include <iostream>
#include <iomanip>
int main() {
    int du;
    double Summer_months = 0, Non_Summer = 0;

    std::cin >> du;
    if (du <= 120) {
        Summer_months += du * 2.10;
        Non_Summer += du * 2.10;
    } else if (du > 120 && du <= 330) {
        Summer_months = 120 * 2.10 + (du - 120) * 3.02;
        Non_Summer = 120 * 2.10 + (du - 120) * 2.68;
    } else if (du > 330 && du <= 500) {
        Summer_months = 210 * 3.02 + 120 * 2.10 + (du - 330) * 4.39;
        Non_Summer = 210 * 2.68 + 120 * 2.10 + (du - 330) * 3.61;
    } else if (du > 500 && du <= 700) {
        Summer_months = 170 * 4.39 + 210 * 3.02 + 120 * 2.10 + (du - 500) * 4.97;
        Non_Summer = 170 * 3.61 + 210 * 2.68 + 120 * 2.10 + (du - 500) * 4.01;
    } else if (du > 700) {
        Summer_months = 200 * 4.97 + 170 * 4.39 + 210 * 3.02 + 120 * 2.10 + (du - 700) * 5.63;
        Non_Summer = 200 * 4.01 + 170 * 3.61 + 210 * 2.68 + 120 * 2.10 + (du - 700) * 4.50;
    }

    std::cout << "Summer months:" << std::fixed << std::setprecision(2) << Summer_months << std::endl;
    std::cout << "Non-Summer months:" << std::fixed << std::setprecision(2) << Non_Summer << std::endl;
    return 0;
}