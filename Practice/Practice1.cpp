#include <iostream>

using namespace std;

int main()
{
	// for�� ������ ����
	int c = 0;

	cout << "������ ����� �����Ͻðڽ��ϱ�?\n" << "���� �ϳ��� �Է����ּ���" << endl;
	cin >> c;

	for (int i = 1; i < 10; ++i)
	{
		cout << c << " * " << i << " = " << c * i << endl;
	}

	//�ﰢ�� �����
	int inp = 0;

	cout << "���� �ϳ��� �Է��� �ּ���." << endl;
	cin >> inp;

	for (int i = 0; i < inp; ++i)
	{
		for (int j = 0; j <= i; ++j)
		{
			cout << "*";
		}
		cout << endl;
	}

	//¦���� ��
	int a, b = 0;

	cout << "���ڸ� �Է��ϼ���. " << endl;
	cin >> a;

	for (int i = 0; i <= a; i = i + 2)
	{
		b += i;
	}
	cout << b;

	//n��°���� ���� ǥ��
	int a = 0;
	cout << "���� �ϳ��� �Է��� �ּ���. " << endl;
	cin >> a;

	if (a <= 0)
	{
		while (a <= 0)
		{
			cout << "���ڸ� �ٽ� �Է��� �ּ���. " << endl;
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

	//n��° ���� ǥ��
	int a = 0;
	cout << "���� �ϳ��� �Է��� �ּ���. " << endl;
	cin >> a;

	if (a <= 0)
	{
		while (a <= 0)
		{
			cout << "���ڸ� �ٽ� �Է��� �ּ���. " << endl;
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