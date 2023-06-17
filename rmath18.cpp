#include <iostream>
#include <cstring>

int a;

int main() {
    while (std::cin >> a) {
        int cnt = 0, text[8];
        std::memset(text, 0, sizeof(int) * 8);
        
        while (a >= 1 && cnt <= 8) {
            text[cnt] = a % 2;
            a /= 2;
            cnt++;
        }
        
        if (a < 0) {
            a = 255 + a + 1;
            while (a >= 1 && cnt <= 8) {
                text[cnt] = a % 2;
                a /= 2;
                cnt++;
            }
        }
        
        for (int i = 7; i >= 0; i--) {
            std::cout << text[i];
        }
        
        std::cout << std::endl;
        
        a = 0;
        cnt = 1;
    }
    return 0;
}