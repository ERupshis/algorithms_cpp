// SandBox.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


class Queue {
private:
    struct Node {
        Node(int num)
            :val(num)
        {}

        int val;
        Node* next = nullptr;
    };
public:
    Queue() = default;

    ~Queue() {
        if (size_ != 0) {
            while (head_) {
                Node* toDelete = head_;
                head_ = head_->next;
                delete toDelete;
            }
        }
    }

    void put(int num) {
        Node* newNode = new Node(num);
        if (size_ == 0) {
            head_ = tail_ = newNode;
        }
        else {
            tail_->next = newNode;
            tail_ = newNode;
        }

        size_++;
    }

    void get() {
        if (size_ == 0) {
            std::cout << "error\n";
        }
        else {
            std::cout << head_->val << '\n';
            Node* toDelete = head_;
            head_ = head_->next;

            delete toDelete;
            size_--;
        }
    }

    void size() {
        std::cout << size_ << '\n';
    }

private:
    Node* head_ = nullptr;
    Node* tail_ = nullptr;
    int size_ = 0;
};


int main()
{
    int n;
    std::cin >> n;

    Queue queue;

    while (n > 0) {
        std::string cmd;
        std::cin >> cmd;

        if (cmd == "put") {
            int num;
            std::cin >> num;

            queue.put(num);
        }
        else if (cmd == "get") {
            queue.get();
        }
        else if (cmd == "size") {
            queue.size();
        }

        n--;
    }
}

