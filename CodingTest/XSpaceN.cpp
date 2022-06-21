#include <iostream>
#include <vector>

using namespace std;

vector<long long> Space(int x, int n);

int main()
{
	// x만큼 간격이 있는 n개의 숫자
	vector<long long> result;
	result = Space(10000000, 1000);
	for (int i = 0; i < result.size(); ++i)
	{
		cout << result[i] << endl;
	}
	
	// 생각 정리
	// x = 시작, x만큼 큰 다음수
	// n = 배열의 갯수
	// arr[] = x ~ x+x ~ x+x+x ~ x+x+x+x
}

vector<long long> Space(int x, int n)
{
	vector<long long> vec(n, x);	// 입력한 값으로 벡터 생성
	vec[0] = x;	// 벡터의 첫번째 값은 x
	for (int i = 1; i < vec.size(); ++i)
	{
		for (int j = i - 1; j < i; ++j)
		{
			vec[i] += vec[j];	// 벡터의 두번째 값부터는 전의 값에 x를 더한 수
		}
	}
	return vec;
}