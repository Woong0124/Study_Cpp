#include <iostream>

using namespace std;

int AbsoluteValue(int iValue);

// [ ���� 2 ]   ���밪 ���ϱ�
int main()
{
    int iptA = 0;
    cout << "������ ���� ���� �Է��� �ּ���... " << endl;
    cin >> iptA;
    iptA = AbsoluteValue(iptA);
    cout << iptA << " �Դϴ�." << endl;
}

int AbsoluteValue(int iValue)
{
    if (iValue >= 0)    // �Է°��� 0 �̻��̸� �״�� ����
    {
        cout << iValue << "�� ������ ";
        return iValue;
    }
    else if (iValue < 0)    // �Է°��� 0 �̸��̸� ����� �ٲ㼭 ����
    {
        cout << iValue << "�� ������ ";
        iValue *= -1;
        return iValue;
    }
}