#include <iostream>

using namespace std;

int main()
{
    // ���簢�� ����� (���α׷��ӽ� Lv 1)
    int iptA;
    int iptB;
    char asterisk = '*';
    cin >> iptA >> iptB;

    for (int i = 0; i < iptB; ++i)
    {
        cout << asterisk;
        for (int j = 1; j < iptA; ++j)
        {
            cout << asterisk;
        }
        cout << endl;
    }
}