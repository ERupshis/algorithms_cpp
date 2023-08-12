#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;

    std::string biggestWord, currentWord;
    while (!std::cin.fail() && std::cin >> currentWord) {
        if (currentWord.size() > biggestWord.size()) {
            biggestWord = currentWord;
        }
    }

    std::cout << biggestWord << '\n' << biggestWord.size() << '\n';
}