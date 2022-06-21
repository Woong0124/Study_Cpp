#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool Harshad(int x);

int main()
{
	// 하샤드 수

	// 생각 정리
	// 각 자릿수 구하기 - a % 10 으로 자릿수 하나씩
	// 자릿수 더하기
	// 더한 수를 원래 값에 나누기
	// 나머지가 0이면 하샤드 수
}

bool Harshad(int x)
{
	int arr[5] = { 0 };	// 자릿수 담을 배열
	int arrSum = 0;	// 자릿수의 합
	int num = x;

	for (int i = 0; i < size(arr); ++i)
	{
		arr[i] = num % 10;
		num /= 10;
		arrSum += arr[i];
	}
	
	if (x % arrSum == 0)	// 자릿수의 합을 나눴을 때 0 이면 True
	{
		return 1;
	}
	else
	{
		return 0;
	}
}