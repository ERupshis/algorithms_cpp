#include <iostream>
#include <map>

const int ButtonsCount = 16;

int main() {
    int k;
    std::cin >> k;


    std::map<char, int8_t> buttonsByNames;
    for (int i = 0; i < ButtonsCount; ++i) {
        char tmp;
        std::cin >> tmp;

        buttonsByNames[tmp]++;
    }

    buttonsByNames.erase('.');

    k *= 2;
    int res = 0;
    for (auto [ch, count] : buttonsByNames) {
        if (count <= k) {
            res++;
        }
    }

    std::cout << res;
}