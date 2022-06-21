#include <iostream>
#include <vector>

using namespace std;

int PrimeNum(int num);

int main()
{
	// 진행중	// 최적화를 해야한다 !!
	// 소수 찾기(1부터 입력받은 숫자 사이에 있는 소수의 개수)
	int result = 0;
	result = PrimeNum(0);
}

int PrimeNum(int num)
{
	int iCount = 0;
	int result = 0;

	cout << "숫자를 입력해 주세요. " << endl;
	cin >> num;

	while (num <= 1)	// num이 1보다 작거나 같으면 재입력 받기
	{
		cout << "숫자를 다시 입력해 주세요. " << endl;
		cin >> num;
	}
	if (num == 2)
	{
		cout << "2 의 소수는 2 입니다." << endl;
		result = 1;
	}
	else if (num > 2)
	{
		for (int i = 2; i <= num; ++i)	// 소수 구하기
		{
			iCount = 0;
			for (int j = 2; j <= i; ++j)
			{
				if (i % j == 0)	// 나머지값이 0이면 나눠지는 수.
				{
					++iCount;	// 나눠지는 수 카운팅
				}
				if (iCount >= 2)
				{
					break;
				}
			}
			if (iCount == 1)	// 나눠지는 수가 한번이면 자기 자신밖에 나눠지지 않는다. 즉 소수
			{
				cout << i << " ";
				++result;
			}
		}
		cout << endl;
	}
	cout << "총 갯수는 " << result << " 입니다" << endl;
	return result;
}