#include <iostream>
#include <vector>
#include <string>

using namespace std;

int Collatz(int num);

int main()
{
	// 콜라츠 추측
	cout << Collatz(626331);

	// 생각 정리
	// for문 >> if문으로 짝수때 홀수때 상황 정리
	// 500 번 이상 반복하면 탈출후 -1 리턴
	// 1이면 0을 리턴
}

int Collatz(int num)
{
	long long x = num;	// 오버플로우 발생 대비 더 큰 자료형으로 복사
	int count = 0;	// 횟수 체크

	if (x == 1)
	{
		return 0;
	}
	for (int i = 0; i < 500; ++i)
	{
		if (x == 1)
		{
			break;
		}
		++count;
		if (x % 2 == 0 && x != 1)	// 짝수 일때 실행
		{
			x /= 2;
			continue;
		}
		if (x % 2 != 0 && x != 1)	// 홀수 일때 실행
		{
			x = (x * 3) + 1;
		}
	}

	if (count >= 500)
	{
		return -1;
	}
	if (count <= 500)
	{
		return count;
	}
}