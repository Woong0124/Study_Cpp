#include <iostream>

using namespace std;

int main()
{
	//5개의 입력값중 가장 큰수(0~100) 구하기
	int iarr[5];
	for (int i = 0; i < 5; ++i)	// 0 ~ 100 사이의 수 입력받기
	{
		cout << "입력하세요. " << endl;
		cin >> iarr[i];

		if (iarr[i] < 0)	// 0이하면 0으로 입력
		{
			iarr[i] = 0;
		}
		else if (iarr[i] > 100)	// 100이상이면 100으로 입력
		{
			iarr[i] = 100;
		}
	}

	int iMax = 0;
	for (int i = 0; i < 5; ++i)	// iMax에 가장 큰 수 집어 넣기
	{
		if (iarr[i] > iMax)	// arr에 저장된 값을 iMax와 비교해서 크다면 값을 넣어준다
		{
			iMax = iarr[i];
		}
	}
	cout << iMax << endl;
}