#include <iostream>
#include <vector>

std::vector<int> eratosthenesSieve(int n) {
	if (n <= 1) {
		return {};
	}

	std::vector<bool> primes(n + 1, true);
	primes[0] = primes[1] = false;

	for (int num = 2; num <= n; ++num) {
		if (primes[num]) {
			for (int j = num * num; j <= n; j += num) {
				primes[j] = false;
			}
		}
	}

	std::vector<int> res;
	for (int i = 2; i < primes.size(); ++i) {
		if (primes[i]) {
			res.push_back(i);
		}
	}

	return res;
}



int main() {
	int num = 0;
	std::cin >> num;

	for (int i : eratosthenesSieve(num)) {
		std::cout << i << ' ';
	}

	return 0;
}