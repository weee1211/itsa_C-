#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iomanip>

const int MAX_INPUT_SIZE = 100;
const int ARRAY_SIZE = 10;

int main() {
    char input[MAX_INPUT_SIZE];
    double text[ARRAY_SIZE];

    while (std::cin.getline(input, MAX_INPUT_SIZE)) {
        std::sscanf(input, "%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf", &text[0], &text[1], &text[2], &text[3], &text[4], &text[5], &text[6], &text[7], &text[8], &text[9]);

        for (int i = 0; i < ARRAY_SIZE; ++i) {
            for (int j = 0; j < i; ++j) {
                if (text[j] > text[i]) {
                    double tmp = text[j];
                    text[j] = text[i];
                    text[i] = tmp;
                }
            }
        }

        std::cout << "maximum:" << std::fixed << std::setprecision(2) << text[ARRAY_SIZE - 1] << std::endl;
        std::cout << "minimum:" << std::fixed << std::setprecision(2) << text[0] << std::endl;
    }

    return 0;
}