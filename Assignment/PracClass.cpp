#include <iostream>
#include "Human.h"

using namespace std;

int PrintNotice(Human& h);

int main()
{
	// Ŭ���� Ȱ���� ����
	Human kim;
	kim.HumanNotice();
	cout << endl;

	kim.HumanInput(kim);
	cout << endl;

	while (true)
	{
		int result = 0;
		result = PrintNotice(kim);
		cout << endl;
		if (result == 1)
		{
			kim.HumanInfo(kim);
			cout << endl;
		}
		else if (result == 2)
		{
			kim.HumanFix(kim);
			cout << endl;
			kim.HumanInfo(kim);
		}
		else if (result == 4)
		{
			cout << endl;
			cout << "�����մϴ�..." << endl;
			break;
		}
	}
}

int PrintNotice(Human& h)
{
	cout << " 1. �޸� ��������" << endl;
	cout << " 2. �޸� ��������" << endl;
	cout << " 3. �� �����ϱ�" << endl;
	cout << " 4. �����ϱ� " << endl;

	int a = 0;
	cin >> a;
	if (a == 3)
	{
		cout << "1. ��Ա�" << endl;
		cout << "2. TV���� " << endl;
		cout << "3. ���ڱ� " << endl;
		cin >> a;
		h.HumanPlay(a);
		return 0;
	}
	return a;
}