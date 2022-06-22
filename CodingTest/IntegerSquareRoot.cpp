#include <iostream>
#include <vector>
#include <string>

using namespace std;

long long SquareRoot(long long n);

int main()
{
	// 정수 제곱근 판별
	
	// 생각 정리
	// 제곱근 구하는 법
	// x * x = n
}

long long SquareRoot(long long n)
{
	long long m = 0;
	for (long long i = 1; i <= (n / 2) + 1; ++i)
	{
		if (i * i == n)
		{
			++i;
			m = i;
			break;
		}
		if (i == (n / 2))
		{
			return -1;
		}
	}
	return m * m;
}