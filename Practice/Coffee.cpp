#include "Coffee.h"

extern unsigned int code = 0;	// 생성될 때 마다 1씩 증가

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