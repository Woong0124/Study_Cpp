#include <iostream>
#include <vector>
#include <string>

using namespace std;

string CoverPhoneNum(string phone_number);

int main()
{
	// �ڵ��� ��ȣ ������
}

string CoverPhoneNum(string phone_number)
{
	string backNum(phone_number);	// �� 4�ڸ� ���� �ѹ�
	string starNum;	// ��ǥ ��� ���� ��
	backNum.erase(0, backNum.size() - 4);	// �� 4�ڸ� ���� ����
	for (int i = 0; i < phone_number.size() -4; ++i)	// ���� �ڸ���ŭ ��ǥ ���
	{
		starNum.push_back('*');
	}
	return starNum.append(backNum);	// ������ŭ ���� ��ǥ�� �� 4�ڸ��� ����, ����
}