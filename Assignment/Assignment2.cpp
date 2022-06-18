#include <iostream>

using namespace std;

int AbsoluteValue(int iValue);

// [ 과제 2 ]   절대값 구하기
int main()
{
    int iptA = 0;
    cout << "절댓값을 구할 수를 입력해 주세요... " << endl;
    cin >> iptA;
    iptA = AbsoluteValue(iptA);
    cout << iptA << " 입니다." << endl;
}

int AbsoluteValue(int iValue)
{
    if (iValue >= 0)    // 입력값이 0 이상이면 그대로 리턴
    {
        cout << iValue << "의 절댓값은 ";
        return iValue;
    }
    else if (iValue < 0)    // 입력값이 0 미만이면 양수로 바꿔서 리턴
    {
        cout << iValue << "의 절댓값은 ";
        iValue *= -1;
        return iValue;
    }
}