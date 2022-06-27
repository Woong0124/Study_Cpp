#include "Human.h"

Human::Human() : head(1), body(1), arms(2), legs(2), name(""), height(0), weight(0) {}

void Human::HumanNotice()
{
	cout << "인간은 보통, " << head << "개의 머리, " << body << "개의 몸통, " << arms << "개의 팔과 " << legs << "개의 다리를 가진다." << endl;
}

void Human::HumanInput(Human& h)
{
	cout << "이름을 입력해주세요..." << endl;
	cin >> h.name;
	cout << "키를 입력해주세요... " << endl;
	cin >> h.height;
	cout << "몸무게를 입력해주세요... " << endl;
	cin >> h.weight;
}

void Human::HumanInfo(const Human& h)
{
	cout << "  휴먼의 정보 " << endl;
	cout << "   이름  : " << h.name << endl;
	cout << "    키   : " << h.height << endl;
	cout << "  몸무게 : " << h.weight << endl;
	cout << endl;
}

void Human::HumanFix(Human& h)
{
	cout << " 수정할 키와 몸무게를 입력해 주세요... " << endl;
	cin >> h.height >> h.weight;
}

void Human::HumanPlay(int a)
{
	if (a == 1)
	{
		cout << "휴먼이 밥을 먹습니다... " << endl;
	}
	else if (a == 2)
	{
		cout << "휴먼이 TV를 봅니다..." << endl;
	}
	else if (a == 3)
	{
		cout << "휴먼이 잠을 잡니다... " << endl;
	}
}