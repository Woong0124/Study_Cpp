#include <iostream>
#include <vector>

using namespace std;

int PrimeNum(int num);

int main()
{
	// �Ҽ� ã��(1���� �Է¹��� ���� ���̿� �ִ� �Ҽ��� ����)
	int result = 0;
	result = PrimeNum(0);
}

int PrimeNum(int num)
{
	int iCount = 0;
	int result = 0;

	cout << "���ڸ� �Է��� �ּ���. " << endl;
	cin >> num;

	while (num <= 1)	// a�� 1���� �۰ų� ������ ���Է� �ޱ�
	{
		cout << "���ڸ� �ٽ� �Է��� �ּ���. " << endl;
		cin >> num;
	}
	if (num == 2)
	{
		cout << "2 �� �Ҽ��� 2 �Դϴ�." << endl;
	}
	else if (num > 2)
	{
		for (int i = 2; i <= num; ++i)	// �Ҽ� ���ϱ�
		{
			iCount = 0;
			for (int j = 2; j <= i; ++j)
			{
				if (i % j == 0)	// ���������� 0�̸� �������� ��.
				{
					++iCount;	// �������� �� ī����
				}
			}
			if (iCount == 1)	// �������� ���� �ѹ��̸� �ڱ� �ڽŹۿ� �������� �ʴ´�. �� �Ҽ��̴�.
			{
				cout << i << " ";
				++result;
			}
		}
		cout << endl;
	}
	cout << "�� ������ " << result << " �Դϴ�" << endl;
	return result;
}