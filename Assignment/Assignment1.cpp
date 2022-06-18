#include <iostream>
#include <Windows.h>

using namespace std;

// [ 과제 1 ]   WASD 눌렀을때의 X, Y 값 증감 
int main()
{
    int x = 0;
    int y = 0;

    while (1)
    {
        system("cls");
        cout << "x = " << x << ", y = " << y << endl;
        system("pause");    // 버튼 입력시까지 대기

        // GetAsyncKeyState(아스키코드 4자리) << 해당 버튼을 눌렀다는 함수
        // 0x8000 << 지금 키가 눌려있다의 의미
        if (GetAsyncKeyState(0x57) & 0x8000)         //iptC == 'w'    // W 키를 눌렀을때 실행
        {
            ++y;
        }
        else if (GetAsyncKeyState(0x53) & 0x8000)    //iptC == 's'    // S 키를 눌렀을때 실행
        {
            --y;
        }
        else if (GetAsyncKeyState(0x44) & 0x8000)    //iptC == 'd'    // D 키를 눌렀을때 실행
        {
            ++x;
        }
        else if (GetAsyncKeyState(0x41) & 0x8000)    //iptC == 'a'    // A 키를 눌렀을때 실행
        {
            --x;
        }
    }
}