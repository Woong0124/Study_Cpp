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
    // 정수 내림차순으로 배치하기
    cout << solution(595108);
}