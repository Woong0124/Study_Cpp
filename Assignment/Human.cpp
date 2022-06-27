#include "Human.h"

Human::Human() : head(1), body(1), arms(2), legs(2), name(""), height(0), weight(0) {}

void Human::HumanNotice()
{
	cout << "�ΰ��� ����, " << head << "���� �Ӹ�, " << body << "���� ����, " << arms << "���� �Ȱ� " << legs << "���� �ٸ��� ������." << endl;
}

void Human::HumanInput(Human& h)
{
	cout << "�̸��� �Է����ּ���..." << endl;
	cin >> h.name;
	cout << "Ű�� �Է����ּ���... " << endl;
	cin >> h.height;
	cout << "�����Ը� �Է����ּ���... " << endl;
	cin >> h.weight;
}

void Human::HumanInfo(const Human& h)
{
	cout << "  �޸��� ���� " << endl;
	cout << "   �̸�  : " << h.name << endl;
	cout << "    Ű   : " << h.height << endl;
	cout << "  ������ : " << h.weight << endl;
	cout << endl;
}

void Human::HumanFix(Human& h)
{
	cout << " ������ Ű�� �����Ը� �Է��� �ּ���... " << endl;
	cin >> h.height >> h.weight;
}

void Human::HumanPlay(int a)
{
	if (a == 1)
	{
		cout << "�޸��� ���� �Խ��ϴ�... " << endl;
	}
	else if (a == 2)
	{
		cout << "�޸��� TV�� ���ϴ�..." << endl;
	}
	else if (a == 3)
	{
		cout << "�޸��� ���� ��ϴ�... " << endl;
	}
}