#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool Harshad(int x);

int main()
{
	// �ϻ��� ��

	// ���� ����
	// �� �ڸ��� ���ϱ� - a % 10 ���� �ڸ��� �ϳ���
	// �ڸ��� ���ϱ�
	// ���� ���� ���� ���� ������
	// �������� 0�̸� �ϻ��� ��
}

bool Harshad(int x)
{
	int arr[5] = { 0 };	// �ڸ��� ���� �迭
	int arrSum = 0;	// �ڸ����� ��
	int num = x;

	for (int i = 0; i < size(arr); ++i)
	{
		arr[i] = num % 10;
		num /= 10;
		arrSum += arr[i];
	}
	
	if (x % arrSum == 0)	// �ڸ����� ���� ������ �� 0 �̸� True
	{
		return 1;
	}
	else
	{
		return 0;
	}
}