#include <iostream>
#include <vector>

using namespace std;

int AddNum(vector<int> iVec);

int main()
{
	// 없는 숫자 더하기
	vector<int> iVec = { 2,3,4,5,6,7,8,0 };
	AddNum(iVec);

	// 생각 정리
	// 0~9까지 들어있는 배열과 입력한 백터.
	// 배열의 숫자를 백터와 비교해서 일치하는게 있다면 0으로 초기화
	// 나머지 배열의 합 리턴
}

int AddNum(vector<int> iVec)
{
	int iResult = 0;
	int arr[10] = { 0 };
	for (int i = 0; i < 10; ++i)	// 배열에 0~9까지 값 지정
	{
		arr[i] = i;
	}
	
	for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j < iVec.size(); ++j)
		{
			if (arr[i] == iVec[j])	// 서로 비교하여 백터에도 일치하는 숫자가 있다면 0으로 초기화
			{
				arr[i] = { 0 };
			}
		}
		iResult += arr[i];	// 서로 비교하여 일치하는 숫자가 없다면 그대로 결과값에 더한다
	}
	return iResult;
}