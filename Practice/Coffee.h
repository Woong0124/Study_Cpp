#pragma once
#include <iostream>
#include <vector>

using namespace std;

// 커피의 정보가 담겨 있는 클래스
class Coffee
{
private:
	unsigned int cCode;	// 커피 코드
	string cName;	// 커피 이름
	string cSize;	// 커피 사이즈
	int cPrice;	// 커피 가격

public:
	Coffee();
	Coffee(string name, int price);

	unsigned int GetCode() const;	// 코드 리턴
	string GetName() const;	// 이름 리턴
	int GetPrice() const;	// 가격 리턴
};