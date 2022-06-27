#pragma once
#include <iostream>
using namespace std;

class Human
{
private:
	int head;
	int body;
	int arms;
	int legs;
	string name;
	int height;
	int weight;

public:
	Human();
	void HumanNotice();	// �⺻ ����
	void HumanInput(Human& h);	// ���� �Է�
	void HumanInfo(const Human& h);	// �Է� ���� ����
	void HumanFix(Human& h);	// �Է� ���� ����
	void HumanPlay(int a);	// �ൿ �Է�
};