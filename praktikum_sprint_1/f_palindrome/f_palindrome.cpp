#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string line;
    std::getline(std::cin, line);

    int l = 0;
    int r = line.size() - 1;
    while (true) {
        while (!std::isalnum(line[l])) {
            ++l;
        }

        while (!std::isalnum(line[r])) {
            --r;
        }

        if (l >= r) {
            break;
        }

        if (std::tolower(line[l]) == std::tolower(line[r])) {
            ++l;
            --r;
        } else {
            std::cout << "False\n";
            break;
        }
    }

    if (l >= r) {
        std::cout << "True\n";
    }
}