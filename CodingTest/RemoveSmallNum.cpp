#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> solution(vector<int> vec)
{
	vector<int> copyVec = vec;
	int min = copyVec[0];

	for (int i = 1; i < copyVec.size(); ++i)	// ���ؼ� ������ min ������ �־�ΰ� ��� ���ؼ� �������� ���
	{
		if (min > copyVec[i])
		{
			min = copyVec[i];
		}
	}

	for (int i = 0; i < copyVec.size(); ++i)	// ���� ���� �Ȱ��� ���� �ִٸ� ���� ���� �ش�
	{
		if (min == copyVec[i])
		{
			copyVec.erase(copyVec.begin() + i);
			--i;
		}
	}

	return copyVec;



	//vector<int> copyVec = vec;
	//int min = 0;
	//
	//if (vec.empty())
	//{
	//	vec.push_back(-1);
	//	return vec;
	//}
	//for (int i = 0; i < 11; ++i)
	//{
	//	for (int j = 0; j < vec.size(); ++j)
	//	{
	//		if (min == vec[j])
	//		{
	//			vec.erase(vec.begin() + j);
	//		}
	//	}
	//	if (vec.size() != copyVec.size())
	//	{
	//		break;
	//	}
	//	++min;
	//}
	//if (min >= 10)
	//{
	//	vec.push_back(-1);
	//	return vec;
	//}
	//if (min != 10)
	//{
	//	return vec;
	//}
}

int main()
{
	// ���� ���� �� �����ϱ�
	vector<int> a = { 5,6,8,1,2,3,5,4,6,8,4,6,2,1,3,6,8,2,1,5,3 };
	vector<int> b;
	b = solution(a);
	for (int i = 0; i < b.size(); ++i)
	{
		cout << b[i] << " ";
	}
}