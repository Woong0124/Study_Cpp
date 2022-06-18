#include <iostream>

using namespace std;

int main()
{
	// for문 구구단 예제
	int c = 0;

	cout << "구구단 몇단을 실행하시겠습니까?\n" << "숫자 하나를 입력해주세요" << endl;
	cin >> c;

	for (int i = 1; i < 10; ++i)
	{
		cout << c << " * " << i << " = " << c * i << endl;
	}

	//삼각형 만들기
	int inp = 0;

	cout << "숫자 하나를 입력해 주세요." << endl;
	cin >> inp;

	for (int i = 0; i < inp; ++i)
	{
		for (int j = 0; j <= i; ++j)
		{
			cout << "*";
		}
		cout << endl;
	}

	//짝수의 합
	int a, b = 0;

	cout << "숫자를 입력하세요. " << endl;
	cin >> a;

	for (int i = 0; i <= a; i = i + 2)
	{
		b += i;
	}
	cout << b;

	//n번째까지 숫자 표기
	int a = 0;
	cout << "숫자 하나를 입력해 주세요. " << endl;
	cin >> a;

	if (a <= 0)
	{
		while (a <= 0)
		{
			cout << "숫자를 다시 입력해 주세요. " << endl;
			cin >> a;
		}
	}

	if (a == 1)
	{
		cout << a << "st" << endl;
	}
	else if (a == 2)
	{
		cout << a - 1 << "st" << endl;
		cout << a << "nd" << endl;
	}
	else if (a == 3)
	{
		cout << a - 2 << "st" << endl;
		cout << a - 1 << "nd" << endl;
		cout << a << "rd" << endl;
	}
	else
	{
		cout << "1st" << endl;
		cout << "2nd" << endl;
		cout << "3rd" << endl;

		for (int j = 4; j <= a; ++j)
		{
			cout << j << "th" << endl;
		}
	}

	//n번째 숫자 표기
	int a = 0;
	cout << "숫자 하나를 입력해 주세요. " << endl;
	cin >> a;

	if (a <= 0)
	{
		while (a <= 0)
		{
			cout << "숫자를 다시 입력해 주세요. " << endl;
			cin >> a;
		}
	}

	switch (a)
	{
	case 1:
		cout << a << "st" << endl;
		break;
	case 2:
		cout << a << "nd" << endl;
		break;
	case 3:
		cout << a << "rd" << endl;
		break;
	default:
		cout << a << "th" << endl;
		break;
	}
}