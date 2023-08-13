#include <iostream>
#include <map>
#include <string>

int main() {
    std::string word1, word2;
    std::cin >> word1 >> word2;

    std::map<char, int> mapWord1;
    for (char ch : word1) {
        mapWord1[ch]++;
    }

    std::map<char, int> mapWord2;
    for (char ch : word2) {
        mapWord2[ch]++;
    }


    for (auto [ch, count] : mapWord2) {
        if (!mapWord1.count(ch) || count != mapWord1[ch]) {
            std::cout << ch;
            break;
        }
    }
}