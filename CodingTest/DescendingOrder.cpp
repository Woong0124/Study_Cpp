#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

long long solution(long long n)
{
    string str = to_string(n);
    sort(str.begin(), str.end(), greater<long long>());
    long long result = stoll(str);
    return result;
}

int main()
{
    // ���� ������������ ��ġ�ϱ�
    cout << solution(595108);
}