#pragma once
#include <iostream>
#include <vector>

using namespace std;

// Ŀ���� ������ ��� �ִ� Ŭ����
class Coffee
{
private:
	unsigned int cCode;	// Ŀ�� �ڵ�
	string cName;	// Ŀ�� �̸�
	string cSize;	// Ŀ�� ������
	int cPrice;	// Ŀ�� ����

public:
	Coffee();
	Coffee(string name, int price);

	unsigned int GetCode() const;	// �ڵ� ����
	string GetName() const;	// �̸� ����
	int GetPrice() const;	// ���� ����
};