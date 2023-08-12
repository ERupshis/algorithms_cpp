#include <iostream>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;

    int mask = 0b0001;

    if ((((a & mask) == 1) && ((b & mask) == 1) && ((c & mask) == 1))
        || (((a & mask) != 1) && ((b & mask) != 1) && ((c & mask) != 1))) {
        std::cout << "WIN";
    }
    else {
        std::cout << "FAIL";
    }

}