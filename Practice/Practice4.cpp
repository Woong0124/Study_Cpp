#include <iostream>
#include <vector>

using namespace std;

int AddNum(vector<int> iVec);

// ���� ���� ������ ��� ���� ��
int main()
{
	vector<int> iVec = { 5,5,5,10,9,5,8,0 };
	AddNum(iVec);

	// ** ���� ���� **
	// �������� ������ �ּҸ� ���� �����
	// ���� �ּ��� ���ڿ� �ٸ� �ڸ����� ���ڵ� ��
	// ���� �ּ��� ���ڸ� 0���� �ʱ�ȭ
	// ���͸� ���ϰ� ����
	// 
	// �������� �ִ��� �ľ�
	// ������ ���ο� �迭�� ����
	// ���ο� �迭�� ��
	// ���� ����
	// 
	// ���ؼ� �������� ������ �ڿ��ڸ��� 0���� �����
	// �� ���ؼ� ������ ���� �ִٸ� �ڱ⵵ 0�� �ȴ�
	// ���� �迭�� ���� ��� ���ؼ� ����
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
			if (iVec[i] == iVec[(j + iCount)])	// i��° ���ڸ� ������ ���� ���Ͽ� ������ �ּҰ��� ����
			{
				pVec.push_back(&iVec[i]);
				pVec.push_back(&iVec[(j + iCount)]);
			}
		}
		if (2 <= pVec.size())	// �����ص� �ּҰ��� ����Ű�� ���� ������ 0���� �ʱ�ȭ
		{
			for (int j = 0; j < pVec.size(); ++j)
			{
				*pVec[j] = 0;
			}
		}
		iResult += iVec[i];
		pVec.clear();	// pVec�� ��� ������, ����� 0���� �ʱ�ȭ
		++iCount;
	}
	cout << iResult;
	return iResult;
}