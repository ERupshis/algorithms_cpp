#include <iostream>
#include <vector>

int main() {
	int n;
	std::cin >> n;

	std::vector<int16_t> vec = std::vector<int16_t>(n + 2, -274);

	for (int i = 1; i <= n; ++i) {
		std::cin >> vec[i];
	}

	int res = 0;
	for (int i = 1; i <= n; ++i) {
		if (vec[i - 1] < vec[i] && vec[i] > vec[i + 1]) {
			res++;
		}
	}

	std::cout << res;
}