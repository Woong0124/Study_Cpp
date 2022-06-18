#include <iostream>

using namespace std;

int solution(int n);

int main()
{
	// 자릿수 더하기 (프로그래머스 Lv 1)
	int result = 0;
	int iptA;
	cin >> iptA;
	result = solution(iptA);
	cout << result;
}

int solution(int n)
{
	int arr[9] = { 0 };
	int result = 0;

	arr[0] = n % 10;	// 첫번째 자리 숫자 저장
	for (int i = 1; i < 9; ++i)	// 두번째 자리 숫자부터 끝 숫자까지 저장
	{
		n /= 10;	// 값을 10으로 나누면서 나머지 값을 구하면 마지막 숫자를 알 수 있다
		arr[i] = n % 10;
	}

	for (int i = 0; i < 9; ++i)	// 각 배열의 숫자들 모두 더해서 리턴해준다
	{
		result += arr[i];
	}
	return result;
}