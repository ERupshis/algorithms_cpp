#include <iostream>
#include <vector>
#include <limits>
#include <string>

template<typename T>
class Stack {
public:
    void push(T x) {
        _data.push_back(x);
    }

    void pop() {
        if (_data.empty()) {
            std::cout << "error" << '\n';
            return;
        }

        _data.pop_back();
    }

    void get_max() {
        if (_data.empty()) {
            std::cout << "None" << '\n';
            return;
        }

        T tmp = std::numeric_limits<T>::min();
        for (T elem : _data) {
            if (elem > tmp) {
                tmp = elem;
            }
        }

        std::cout << tmp << '\n';
    }


private:
    std::vector<T> _data;
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