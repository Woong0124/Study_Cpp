#include <iostream>

using namespace std;

int solution(int n);

int main()
{
	// �ڸ��� ���ϱ� (���α׷��ӽ� Lv 1)
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

	arr[0] = n % 10;	// ù��° �ڸ� ���� ����
	for (int i = 1; i < 9; ++i)	// �ι�° �ڸ� ���ں��� �� ���ڱ��� ����
	{
		n /= 10;	// ���� 10���� �����鼭 ������ ���� ���ϸ� ������ ���ڸ� �� �� �ִ�
		arr[i] = n % 10;
	}

	for (int i = 0; i < 9; ++i)	// �� �迭�� ���ڵ� ��� ���ؼ� �������ش�
	{
		result += arr[i];
	}
	return result;
}