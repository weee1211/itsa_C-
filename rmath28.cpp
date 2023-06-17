#include <iostream>
#include <vector>

int main() {
    int a;
    std::vector<int> b;
    
    while (std::cin >> a) {
        for (int i = 1; i <= a; i++) {
            if (i % 5 == 0 && i % 7 == 0) {
                b.push_back(i);
            }
        }
        
        for (int i = 0; i < b.size(); i++) {
            if (i == b.size() - 1) {
                std::cout << b[i] << std::endl;
            } else {
                std::cout << b[i] << " ";
            }
            b[i] = 0;
        }
        
        b.clear();
    }
    
    return 0;
}