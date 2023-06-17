#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string text, input;
    char tmp;
    int key = -4;

    std::getline(std::cin, text);
    std::cin >> key;

    for (int i = 0; i < text.length(); i++) {
        tmp = text[i];
        if (std::isalnum(tmp)) {
            if (std::islower(tmp)) {
                tmp = (tmp - 'a' + key) % 26 + 'a';
            }

            if (std::isupper(tmp)) {
                tmp = (tmp - 'A' + key) % 26 + 'A';
            }

            if (std::isdigit(tmp)) {
                tmp = (tmp - '0' + key) % 10 + '0';
            }
        }

        text[i] = tmp;
    }

    std::cout << text << std::endl;

    return 0;
}