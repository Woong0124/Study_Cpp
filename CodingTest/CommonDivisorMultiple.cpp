#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
	arr.pop_back();
	if (arr.back() == 0)
	{
		arr.clear();
		arr.push_back(-1);
		return arr;
	}
	return arr;
}

int main()
{
	// 최대공약수와 최소공배수
	int a = 18;
	int b = 24;
	int c = a;
	int d = b;
	int min = 1;	// 최대 공약수 담을 변수
	int max = 1;	// 최대 공배수 담을 변수

	for (int i = 2; i < 1111; ++i)	// 최대 공약수
	{
		if (a % i == 0 && b % i == 0)
		{
			a /= i;
			b /= i;
			min *= i;
			--i;
		}
	}
	cout << "MIN = " << min << endl;

	for (int i = 0; i < 1000000; ++i)	// 최소 공배수
	{
		if (c * d == min * max)
		{
			break;
		}
		++max;
	}
	cout << "MAX = " << max << endl;

	//for (int i = 2; i < 1111; ++i)	// 소인수 분해
	//{
	//	if (b % i == 0)
	//	{
	//		b /= i;
	//		vecB.push_back(i);
	//		--i;
	//	}
	//}
	//sort(vecB.begin(), vecB.end());
}