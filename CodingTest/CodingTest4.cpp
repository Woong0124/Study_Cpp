#include <iostream>
#include <vector>

using namespace std;

int AddNum(vector<int> iVec);

int main()
{
	// ���� ���� ���ϱ�
	vector<int> iVec = { 2,3,4,5,6,7,8,0 };
	AddNum(iVec);

	// ���� ����
	// 0~9���� ����ִ� �迭�� �Է��� ����.
	// �迭�� ���ڸ� ���Ϳ� ���ؼ� ��ġ�ϴ°� �ִٸ� 0���� �ʱ�ȭ
	// ������ �迭�� �� ����
}

int AddNum(vector<int> iVec)
{
	int iResult = 0;
	int arr[10] = { 0 };
	for (int i = 0; i < 10; ++i)	// �迭�� 0~9���� �� ����
	{
		arr[i] = i;
	}
	
	for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j < iVec.size(); ++j)
		{
			if (arr[i] == iVec[j])	// ���� ���Ͽ� ���Ϳ��� ��ġ�ϴ� ���ڰ� �ִٸ� 0���� �ʱ�ȭ
			{
				arr[i] = { 0 };
			}
		}
		iResult += arr[i];	// ���� ���Ͽ� ��ġ�ϴ� ���ڰ� ���ٸ� �״�� ������� ���Ѵ�
	}
	return iResult;
}