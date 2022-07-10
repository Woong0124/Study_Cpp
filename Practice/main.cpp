#include <iostream>
#include <vector>
#include "Coffee.h"

using namespace std;

string* insertName(string name[]);	// 커피 이름 넣기
string* insertSize(string size[]);	// 커피 사이즈 넣기
int* insertPrice(int price[]);	// 커피 가격 넣기



int main()
{
	vector<Coffee> c;
	string name[20];
	string size[4];
	int price[20];

	string* pName = insertName(name);	// 커피 이름 넣기
	string* pSize = insertSize(size);	// 커피 사이즈 넣기
	int* pPrice = insertPrice(price);	// 커피 가격 넣기

	int i = 0;
	for (string n : name)	// Coffee클래스형 벡터에 데이터 추가
	{
		c.push_back(Coffee(name[i], price[i]));
		//cout << "Code : " << c[i].GetCode() << ",	Name : " << c[i].GetName() << " [" << c[i].GetPrice() << "원]" << endl;
		++i;
	}

	while (true)
	{
		// 1. 매니저 모드 전환
		// 2. 계산 모드 전환

		// 매니저 모드 (각각의 상황에 맞춰 구현)
		// 1-1. 커피 추가
		// 1-2. 커피 제거
		// 1-3. 모든 커피 보기
		
		// 계산 모드 (순서대로 진행되게 구현)
		// 2-0. 모든 커피 보기
		// 2-1. 커피 선택
		// 2-2. 커피 사이즈 선택
		// 2-3. 선택한 커피들 가격 계산
	}
}



string* insertName(string name[])
{
	name[0] = "에스프레소";
	name[1] = "아이스 에스프레소";
	name[2] = "아메리카노";
	name[3] = "아이스 아메리카노";
	name[4] = "카푸치노";
	name[5] = "아이스 카푸치노";
	name[6] = "카페 모카";
	name[7] = "아이스 카페 모카";
	name[8] = "카라멜 마끼아또";
	name[9] = "아이스 카라멜 마끼아또";
	name[10] = "카페 라떼";
	name[11] = "아이스 카페 라떼";
	name[12] = "녹차 라떼";
	name[13] = "아이스 녹차 라떼";
	name[14] = "바닐라 라떼";
	name[15] = "아이스 바닐라 라떼";
	name[16] = "초콜릿 라떼";
	name[17] = "아이스 초콜릿 라떼";
	name[18] = "핫 초코";
	name[19] = "아이스 초코";
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