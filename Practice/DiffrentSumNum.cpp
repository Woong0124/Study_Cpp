#include <iostream>
#include <vector>

using namespace std;

int AddNum(vector<int> iVec);

// ���� ���� ������ ��� ���� ��
int main()
{
	vector<int> iVec = { 5,5,6,5,8,4,5,4 };
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

	for (int i = 0; i < iVec.size(); ++i)
	{
		for (int j = 1; (j + i) < iVec.size(); ++j)
		{
			if (iVec[i] == iVec[(j + i)])	// i��° ���ڸ� ������ ���� ���Ͽ� ������ �ּҰ��� ����
			{
				pVec.push_back(&iVec[i]);
				pVec.push_back(&iVec[(j + i)]);
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
	}
	cout << iResult;
	return iResult;
}