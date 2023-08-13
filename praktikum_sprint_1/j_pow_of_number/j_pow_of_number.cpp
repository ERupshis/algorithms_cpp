#include <iostream>

int main() {
    int num;
    std::cin >> num;

    while (num > 1) {
        if (num % 4 != 0) {
            std::cout << "False";
            break;
        }

        num /= 4;
    }

    if (num == 1) {
        std::cout << "True";
    }
}