#include <iostream>
#include <Windows.h>

using namespace std;

// [ ���� 1 ]   WASD ���������� X, Y �� ���� 
int main()
{
    int x = 0;
    int y = 0;

    while (1)
    {
        system("cls");
        cout << "x = " << x << ", y = " << y << endl;
        system("pause");    // ��ư �Է½ñ��� ���

        // GetAsyncKeyState(�ƽ�Ű�ڵ� 4�ڸ�) << �ش� ��ư�� �����ٴ� �Լ�
        // 0x8000 << ���� Ű�� �����ִ��� �ǹ�
        if (GetAsyncKeyState(0x57) & 0x8000)         //iptC == 'w'    // W Ű�� �������� ����
        {
            ++y;
        }
        else if (GetAsyncKeyState(0x53) & 0x8000)    //iptC == 's'    // S Ű�� �������� ����
        {
            --y;
        }
        else if (GetAsyncKeyState(0x44) & 0x8000)    //iptC == 'd'    // D Ű�� �������� ����
        {
            ++x;
        }
        else if (GetAsyncKeyState(0x41) & 0x8000)    //iptC == 'a'    // A Ű�� �������� ����
        {
            --x;
        }
    }
}