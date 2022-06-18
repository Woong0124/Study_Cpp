#include <iostream>
#include <vector>

using namespace std;

int AddNum(vector<int> iVec);

// 같은 수를 제외한 모든 수의 합
int main()
{
	vector<int> iVec = { 5,5,5,10,9,5,8,0 };
	AddNum(iVec);

	// ** 생각 정리 **
	// 같은수가 있으면 주소를 따로 빼논다
	// 빼논 주소의 숫자와 다른 자리수의 숫자도 비교
	// 빼논 주소의 숫자를 0으로 초기화
	// 백터를 합하고 리턴
	// 
	// 같은수가 있는지 파악
	// 없으면 새로운 배열에 복사
	// 새로운 배열의 합
	// 합을 리턴
	// 
	// 비교해서 같은수가 있으면 뒤에자리를 0으로 만든다
	// 다 비교해서 지워진 수가 있다면 자기도 0이 된다
	// 남은 배열의 값을 모두 더해서 리턴
}

int AddNum(vector<int> iVec)
{
	vector<int*> pVec;
	int iResult = 0;
	int iCount = 0;

	for (int i = 0; i < iVec.size(); ++i)
	{
		for (int j = 1; (j + iCount) < iVec.size(); ++j)
		{
			if (iVec[i] == iVec[(j + iCount)])	// i번째 숫자를 나머지 수와 비교하여 같으면 주소값을 저장
			{
				pVec.push_back(&iVec[i]);
				pVec.push_back(&iVec[(j + iCount)]);
			}
		}
		if (2 <= pVec.size())	// 저장해둔 주소값이 가리키는 곳의 수들을 0으로 초기화
		{
			for (int j = 0; j < pVec.size(); ++j)
			{
				*pVec[j] = 0;
			}
		}
		iResult += iVec[i];
		pVec.clear();	// pVec의 모든 데이터, 사이즈를 0으로 초기화
		++iCount;
	}
	cout << iResult;
	return iResult;
}