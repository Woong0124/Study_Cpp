#include <iostream>

using namespace std;

int main()
{
	// 포인터가 가르키는 곳의 배열의 길이를 구하시오
	char* pChar;
	char arrChar[15] = "1234567890123";
	pChar = arrChar;

	int i = 0;	// while문에서 사용할 증가 변수
	int result = 0;	// 결과값 받는 변수
	while (true)
	{
		if (*(pChar + i) != '\0')	// *(포인터 + 인덱스) == 배열[인덱스]
		{
			++result;
		}
		else if (*(pChar + i) == '\0')
		{
			break;
		}
		++i;
	}
	cout << (result + 1);
}