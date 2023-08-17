#include <iostream>
#include <stack>
#include <string>

bool isCorrectBrackets(char left, char right) {
    if (left == '(') {
        return left + 1 == right;
    }
    else {
        return left + 2 == right;
    }
}

int main() {
    std::stack<char> st;

    std::string seq;
    std::getline(std::cin, seq);

    bool correct = true;
    for (char ch : seq) {
        if (ch == '[' || ch == '{' || ch == '(') {
            st.push(ch);
            continue;
        }
        else if (st.empty() || !isCorrectBrackets(st.top(), ch)) {
            correct = false;
            break;
        }
        st.pop();
    }

    if (st.empty() && correct) {
        std::cout << "True";
    }
    else {
        std::cout << "False";
    }



    return 0;
}
