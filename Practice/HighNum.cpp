#include <iostream>

using namespace std;

int main()
{
	//5���� �Է°��� ���� ū��(0~100) ���ϱ�
	int iarr[5];
	for (int i = 0; i < 5; ++i)	// 0 ~ 100 ������ �� �Է¹ޱ�
	{
		cout << "�Է��ϼ���. " << endl;
		cin >> iarr[i];

		if (iarr[i] < 0)	// 0���ϸ� 0���� �Է�
		{
			iarr[i] = 0;
		}
		else if (iarr[i] > 100)	// 100�̻��̸� 100���� �Է�
		{
			iarr[i] = 100;
		}
	}

	int iMax = 0;
	for (int i = 0; i < 5; ++i)	// iMax�� ���� ū �� ���� �ֱ�
	{
		if (iarr[i] > iMax)	// arr�� ����� ���� iMax�� ���ؼ� ũ�ٸ� ���� �־��ش�
		{
			iMax = iarr[i];
		}
	}
	cout << iMax << endl;
}