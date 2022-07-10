#include "Coffee.h"

extern unsigned int code = 0;	// ������ �� ���� 1�� ����

Coffee::Coffee() : cCode(code++), cName(""), cSize(""), cPrice(0) {}

Coffee::Coffee(string name, int price) : cCode(code++), cName(name), cSize(""), cPrice(price) {}

unsigned int Coffee::GetCode() const
{
	return cCode;
}

string Coffee::GetName() const
{
	return cName;
}

int Coffee::GetPrice() const
{
	return cPrice;
}