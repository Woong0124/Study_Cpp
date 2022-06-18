#include <iostream>

using namespace std;

int main()
{
	//입력 받은 값까지의 소수 구하기
	int a, b = 0;

	cout << "숫자를 입력해 주세요. " << endl;
	cin >> a;

	while (a <= 1)	// a가 1보다 작거나 같으면 재입력 받기
	{
		cout << "숫자를 다시 입력해 주세요. " << endl;
		cin >> a;
	}

	if (a == 2)
	{
		cout << "2 의 소수는 2 입니다." << endl;
	}
	else if (a > 2)
	{
		for (int i = 2; i <= a; ++i)	// 소수 구하기
		{
			b = 0;
			for (int j = 2; j <= i; ++j)
			{
				if (i % j == 0)	// 나머지값이 0이면 나눠지는 수.
				{
					++b;	// 나눠지는 수 카운팅
				}
			}
			if (b == 1)	// 나눠지는 수가 한번이면 자기 자신밖에 나눠지지 않는다. 즉 소수이다.
			{
				cout << i << " ";
			}
		}
	}
}