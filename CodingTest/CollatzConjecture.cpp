#include <iostream>
#include <vector>
#include <string>

using namespace std;

int Collatz(int num);

int main()
{
	// �ݶ��� ����
	cout << Collatz(626331);

	// ���� ����
	// for�� >> if������ ¦���� Ȧ���� ��Ȳ ����
	// 500 �� �̻� �ݺ��ϸ� Ż���� -1 ����
	// 1�̸� 0�� ����
}

int Collatz(int num)
{
	long long x = num;	// �����÷ο� �߻� ��� �� ū �ڷ������� ����
	int count = 0;	// Ƚ�� üũ

	if (x == 1)
	{
		return 0;
	}
	for (int i = 0; i < 500; ++i)
	{
		if (x == 1)
		{
			break;
		}
		++count;
		if (x % 2 == 0 && x != 1)	// ¦�� �϶� ����
		{
			x /= 2;
			continue;
		}
		if (x % 2 != 0 && x != 1)	// Ȧ�� �϶� ����
		{
			x = (x * 3) + 1;
		}
	}

	if (count >= 500)
	{
		return -1;
	}
	if (count <= 500)
	{
		return count;
	}
}