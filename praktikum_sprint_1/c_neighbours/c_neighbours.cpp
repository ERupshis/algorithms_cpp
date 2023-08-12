#include <iostream>
#include <vector>
#include <algorithm>

const int outOfLimit = 1001;

using Vec = std::vector<int16_t>;
using Matrix = std::vector<std::vector<int16_t>>;

int main() {
	int row, col;
	std::cin >> row >> col;

	Matrix matrix = Matrix(row + 2, Vec(col + 2, outOfLimit));

	for (int i = 1; i <= row; ++i) {
		for (int j = 1; j <= col; ++j) {
			int tmp;
			std::cin >> tmp;
			matrix[i][j] = tmp;
		}
	}

	int x, y;
	std::cin >> y >> x;

	Vec yShift = Vec{ -1, 0, 1, 0 };
	Vec xShift = Vec{ 0, 1, 0, -1 };

	Vec res;
	for (int i = 0; i < xShift.size(); ++i) {
		int num = matrix[y + 1 + yShift[i]][x + 1 + xShift[i]];
		if (num != outOfLimit) {
			res.push_back(num);
		}
	}

	std::sort(res.begin(), res.end());

	for (int i : res) {
		std::cout << i << ' ';
	}
}