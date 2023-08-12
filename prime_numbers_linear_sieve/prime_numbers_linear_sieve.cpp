#include <iostream>
#include <vector>


std::vector<int> linearSieve(int n) {
	std::vector<int> leastPrimes(n + 1, 0);
	std::vector<int> primes;

	for (int i = 2; i <= n; i++) {
		if (leastPrimes[i] == 0) {
			leastPrimes[i] = i;
			primes.push_back(i);
		}

		for (int prime : primes) {
			int x = prime * i;

			if (prime > leastPrimes[i] || x > n) {
				break;
			}

			leastPrimes[x] = prime;
		}
	}

	return primes;
}

int main() {
	int num = 0;
	std::cin >> num;

	for (int i : linearSieve(num)) {
		std::cout << i << ' ';
	}

	return 0;
}