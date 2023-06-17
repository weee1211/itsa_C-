#include <iostream>
#include <cstring>

int main() {
    char str[100];
    int len, flag, i;

    while (std::cin >> str)
    {
        flag = 1;
        len = std::strlen(str);

        for (i = 0; i < len / 2; i++)
        {
            if (str[i] != str[len - 1 - i])
            {
                flag = 0;
                break;
            }
        }
        if (flag)
            std::cout << "YES" << std::endl;
        else
            std::cout << "NO" << std::endl;
    }
    return 0;
}