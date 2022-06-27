#include <iostream>
#include "Human.h"

using namespace std;

int PrintNotice(Human& h);

int main()
{
	// 클래스 활용해 보기
	Human kim;
	kim.HumanNotice();
	cout << endl;

	kim.HumanInput(kim);
	cout << endl;

	while (true)
	{
		int result = 0;
		result = PrintNotice(kim);
		cout << endl;
		if (result == 1)
		{
			kim.HumanInfo(kim);
			cout << endl;
		}
		else if (result == 2)
		{
			kim.HumanFix(kim);
			cout << endl;
			kim.HumanInfo(kim);
		}
		else if (result == 4)
		{
			cout << endl;
			cout << "종료합니다..." << endl;
			break;
		}
	}
}

int PrintNotice(Human& h)
{
	cout << " 1. 휴먼 정보보기" << endl;
	cout << " 2. 휴먼 정보수정" << endl;
	cout << " 3. 헹동 선택하기" << endl;
	cout << " 4. 종료하기 " << endl;

	int a = 0;
	cin >> a;
	if (a == 3)
	{
		cout << "1. 밥먹기" << endl;
		cout << "2. TV보기 " << endl;
		cout << "3. 잠자기 " << endl;
		cin >> a;
		h.HumanPlay(a);
		return 0;
	}
	return a;
}