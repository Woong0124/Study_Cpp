#include <iostream>
#include <vector>
#include "Coffee.h"

using namespace std;

string* insertName(string name[]);	// Ŀ�� �̸� �ֱ�
string* insertSize(string size[]);	// Ŀ�� ������ �ֱ�
int* insertPrice(int price[]);	// Ŀ�� ���� �ֱ�



int main()
{
	vector<Coffee> c;
	string name[20];
	string size[4];
	int price[20];

	string* pName = insertName(name);	// Ŀ�� �̸� �ֱ�
	string* pSize = insertSize(size);	// Ŀ�� ������ �ֱ�
	int* pPrice = insertPrice(price);	// Ŀ�� ���� �ֱ�

	int i = 0;
	for (string n : name)	// CoffeeŬ������ ���Ϳ� ������ �߰�
	{
		c.push_back(Coffee(name[i], price[i]));
		//cout << "Code : " << c[i].GetCode() << ",	Name : " << c[i].GetName() << " [" << c[i].GetPrice() << "��]" << endl;
		++i;
	}

	while (true)
	{
		// 1. �Ŵ��� ��� ��ȯ
		// 2. ��� ��� ��ȯ

		// �Ŵ��� ��� (������ ��Ȳ�� ���� ����)
		// 1-1. Ŀ�� �߰�
		// 1-2. Ŀ�� ����
		// 1-3. ��� Ŀ�� ����
		
		// ��� ��� (������� ����ǰ� ����)
		// 2-0. ��� Ŀ�� ����
		// 2-1. Ŀ�� ����
		// 2-2. Ŀ�� ������ ����
		// 2-3. ������ Ŀ�ǵ� ���� ���
	}
}



string* insertName(string name[])
{
	name[0] = "����������";
	name[1] = "���̽� ����������";
	name[2] = "�Ƹ޸�ī��";
	name[3] = "���̽� �Ƹ޸�ī��";
	name[4] = "īǪġ��";
	name[5] = "���̽� īǪġ��";
	name[6] = "ī�� ��ī";
	name[7] = "���̽� ī�� ��ī";
	name[8] = "ī��� �����ƶ�";
	name[9] = "���̽� ī��� �����ƶ�";
	name[10] = "ī�� ��";
	name[11] = "���̽� ī�� ��";
	name[12] = "���� ��";
	name[13] = "���̽� ���� ��";
	name[14] = "�ٴҶ� ��";
	name[15] = "���̽� �ٴҶ� ��";
	name[16] = "���ݸ� ��";
	name[17] = "���̽� ���ݸ� ��";
	name[18] = "�� ����";
	name[19] = "���̽� ����";
	return name;
}
string* insertSize(string size[])
{
	size[0] = "Short";
	size[1] = "Tall";
	size[2] = "Grande";
	size[3] = "Venti";
	return size;
}
int* insertPrice(int price[])
{
	price[0] = 3000;
	price[1] = 3500;
	price[2] = 3500;
	price[3] = 4000;
	price[4] = 4500;
	price[5] = 5000;
	price[6] = 4500;
	price[7] = 5000;
	price[8] = 4500;
	price[9] = 5000;
	price[10] = 4500;
	price[11] = 5000;
	price[12] = 4000;
	price[13] = 4500;
	price[14] = 4000;
	price[15] = 4500;
	price[16] = 4000;
	price[17] = 4500;
	price[18] = 4000;
	price[19] = 4500;
	return price;
}