#include <iostream>
#include <vector>
#include <string>

using namespace std;

string CoverPhoneNum(string phone_number);

int main()
{
	// 핸드폰 번호 가리기
}

string CoverPhoneNum(string phone_number)
{
	string backNum(phone_number);	// 뒤 4자리 복사 넘버
	string starNum;	// 별표 찍어 놓을 것
	backNum.erase(0, backNum.size() - 4);	// 뒤 4자리 빼고 삭제
	for (int i = 0; i < phone_number.size() -4; ++i)	// 가릴 자리만큼 별표 찍기
	{
		starNum.push_back('*');
	}
	return starNum.append(backNum);	// 가릴만큼 찍은 별표와 뒤 4자리를 조합, 리턴
}