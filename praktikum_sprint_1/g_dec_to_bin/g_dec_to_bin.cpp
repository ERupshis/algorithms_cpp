#include <iostream>
#include <vector>

int main() {
    int num;
    std::cin >> num;

    if (num == 0) {
        std::cout << 0;
        return 0;
    }

    std::vector<int> res;
    while (num != 0) {
        res.push_back(num % 2);
        num /= 2;
    }

    for (int i = res.size() - 1; i >= 0; --i) {
        std::cout << res[i];
    }
}