#include <iostream>
#include <vector>

using namespace std;

vector<long long> Space(int x, int n);

int main()
{
	// x��ŭ ������ �ִ� n���� ����
	vector<long long> result;
	result = Space(10000000, 1000);
	for (int i = 0; i < result.size(); ++i)
	{
		cout << result[i] << endl;
	}
	
	// ���� ����
	// x = ����, x��ŭ ū ������
	// n = �迭�� ����
	// arr[] = x ~ x+x ~ x+x+x ~ x+x+x+x
}

vector<long long> Space(int x, int n)
{
	vector<long long> vec(n, x);	// �Է��� ������ ���� ����
	vec[0] = x;	// ������ ù��° ���� x
	for (int i = 1; i < vec.size(); ++i)
	{
		for (int j = i - 1; j < i; ++j)
		{
			vec[i] += vec[j];	// ������ �ι�° �����ʹ� ���� ���� x�� ���� ��
		}
	}
	return vec;
}