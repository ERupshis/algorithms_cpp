#include <iostream>
#include <vector>

const int OutOfLimit = 10'000'000;

int main() {
    int n;
    std::cin >> n;

    std::vector<int> vec;
    vec.reserve(n);

    while (n != 0) {
        int tmp;
        std::cin >> tmp;
        vec.push_back(tmp);

        --n;
    }


    int dist = OutOfLimit;
    for (int i = 0; i < vec.size(); ++i) {
        dist = ((vec[i] == 0) ? 0 : dist + 1);
        vec[i] = dist;
    }

    dist = OutOfLimit;
    for (int i = vec.size() - 1; i >= 0; --i) {
        dist = ((vec[i] == 0) ? 0 : dist + 1);
        if (vec[i] > dist) {
            vec[i] = dist;
        }
    }

    for (int elem : vec) {
        std::cout << elem << ' ';
    }
}