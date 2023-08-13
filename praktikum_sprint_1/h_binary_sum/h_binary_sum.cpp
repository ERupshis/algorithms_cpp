#include <iostream>
#include <string>

int main() {
    std::string num1, num2;
    std::cin >> num1 >> num2;

    if (num1 == "0" && num2 == "0") {
        std::cout << "0";
        return 0;
    }

    if (num1.size() < num2.size()) {
        std::swap(num1, num2);
    }

    std::string res;
    int transition = 0;
    while (!num1.empty()) {
        int tmp = (num1.back() - '0') + (num2.empty() ? 0 : num2.back() - '0') + transition;

        res.push_back((tmp % 2) + '0');
        transition = tmp / 2;
        num1.pop_back();

        if (!num2.empty()) {
            num2.pop_back();
        }
    }

    if (transition != 0) {
        res.push_back(transition + '0');
    }

    for (int i = res.size() - 1; i >= 0; --i) {
        std::cout << res[i];
    }
}
