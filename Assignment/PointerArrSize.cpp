#include <iostream>

using namespace std;

int main()
{
	// �����Ͱ� ����Ű�� ���� �迭�� ���̸� ���Ͻÿ�
	char* pChar;
	char arrChar[15] = "1234567890123";
	pChar = arrChar;

	int i = 0;	// while������ ����� ���� ����
	int result = 0;	// ����� �޴� ����
	while (true)
	{
		if (*(pChar + i) != '\0')	// *(������ + �ε���) == �迭[�ε���]
		{
			++result;
		}
		else if (*(pChar + i) == '\0')
		{
			break;
		}
		++i;
	}
	cout << (result + 1);
}