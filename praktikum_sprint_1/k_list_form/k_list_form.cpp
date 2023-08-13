#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> first;
    first.reserve(n);
    while (n != 0) {
        int tmp;
        std::cin >> tmp;
        first.push_back(tmp);

        n--;
    }

    int second;
    std::cin >> second;

    std::vector<int> res;
    for (int i = first.size(); i > 0; --i) {
        int sum = first[i - 1] + second;
        res.push_back(sum % 10);
        second = sum / 10;
    }

    while (second != 0) {
        res.push_back(second % 10);
        second /= 10;
    }

    for (int i = res.size() - 1; i >= 0; --i) {
        std::cout << res[i] << ' ';
    }

}