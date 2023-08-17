#include <iostream>
#include <vector>

template<typename T>
using Matrix = std::vector<std::vector<T>>;

int main() {
    int n, m;
    std::cin >> n >> m;

    auto matrix = Matrix<int16_t>(n, std::vector<int16_t>(m, 0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int num;
            std::cin >> num;

            matrix[i][j] = num;
        }
    }

    auto res = Matrix<int16_t>(m, std::vector<int16_t>(n, 0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            res[j][i] = matrix[i][j];
        }
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << res[i][j] << ' ';
        }
        std::cout << '\n';
    }


    return 0;
}