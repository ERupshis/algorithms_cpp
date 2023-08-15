#include <iostream>
#include <vector>
#include <limits>
#include <string>
#include <algorithm>

template<typename T>
class Stack {
public:
    void push(T x) {
        _data.push_back(x);

        if (_max.empty()) {
            _max.push_back(x);
        }
        else {
            _max.push_back(std::max(_max.back(), x));
        }
    }

    void pop() {
        if (_data.empty()) {
            std::cout << "error" << '\n';
            return;
        }

        _data.pop_back();
        _max.pop_back();
    }

    void get_max() {
        if (_max.empty()) {
            std::cout << "None" << '\n';
        }
        else {
            std::cout << _max.back() << '\n';
        }
    }


private:
    std::vector<T> _data;
    std::vector<T> _max;
};

int main() {
    Stack<int> stack;

    int n;
    std::cin >> n;

    while (n > 0) {
        std::string command;
        std::cin >> command;

        if (command == "push") {
            int num;
            std::cin >> num;

            stack.push(num);

        }
        else if (command == "pop") {
            stack.pop();
        }
        else if (command == "get_max") {
            stack.get_max();
        }

        --n;
    }


    return 0;
}