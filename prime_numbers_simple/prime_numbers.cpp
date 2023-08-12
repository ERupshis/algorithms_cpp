#include <iostream>
#include <vector>


// time: O(sqrt(n))
bool isPrime(int num)
{
	int i = 2;
	while (i * i <= num)
	{
		if (num % i == 0)
		{
			return false;
		}
		++i;
	}

	return true;
}

// time: O(n * sqrt(n))
std::vector<int> primeNumbers(int n)
{
	std::vector<int> res;
	for (int i = 2; i <= n; ++i)
	{
		if (isPrime(i))
		{
			res.push_back(i);
		}
	}
	return res;
}



int main()
{
	int num = 0;
	std::cin >> num;

	for (int i : primeNumbers(num))
	{
		std::cout << i << ' ';
	}

	return 0;
}