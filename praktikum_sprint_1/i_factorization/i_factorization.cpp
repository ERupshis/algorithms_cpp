#include <iostream>
#include <vector>

int main() {
    int num;
    std::cin >> num;

    std::vector<int> res;

    for (int i = 2; i * i <= num; i++) {
        while (num % i == 0) {
            res.push_back(i);
            num /= i;
        }
    }

    if (num != 1) {
        res.push_back(num);
    }

    for (int elem : res) {
        std::cout << elem << ' ';
    }
}