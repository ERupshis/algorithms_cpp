// SandBox.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <iostream>
#include <string>

template<typename T>
class Queue {
public:
    explicit Queue(int size)
    {
        data_.resize(size);
    }

    void push(T val) {
        if (data_.size() == size_) {
            std::cout << "error\n";
        }
        else {
            data_[tail_] = val;
            tail_ = (tail_ + 1) % data_.size();
            size_++;
        }
    }

    void pop() {
        if (size_ == 0) {
            std::cout << "None\n";
        }
        else {
            std::cout << data_[head_];
            head_ = (head_ + 1) % data_.size();
            size_--;
        }
    }

    void peek() {
        if (size_ == 0) {
            std::cout << "None\n";
        }
        else {
            std::cout << data_[head_] << '\n';
        }
    }

    void size() {
        std::cout << size_ << '\n';
    }

private:
    std::vector<T> data_;
    size_t head_ = 0;
    size_t tail_ = 0;
    size_t size_ = 0;
};


int main()
{
    int n, size;
    std::cin >> n >> size;

    Queue<int> queue(size);

    while (n > 0) {
        std::string cmd;
        std::cin >> cmd;

        if (cmd == "push") {
            int num;
            std::cin >> num;

            queue.push(num);
        }
        else if (cmd == "pop") {
            queue.pop();
        }
        else if (cmd == "peek") {
            queue.peek();
        }
        else if (cmd == "size") {
            queue.size();
        }

        n--;
    }
}

