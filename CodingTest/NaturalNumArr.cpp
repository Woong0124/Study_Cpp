#include <vector>
#include <algorithm>
#include <string>
#include <iostream>

using namespace std;

vector<int> solution(long long n)
{
    vector<int> vec;
    string str = to_string(n);
    for (int i = 0; i <= str.size() - 1; ++i)
    {
        vec.push_back(n % 10);
        n /= 10;
    }
    return vec;
}

int main()
{
    // 자연수 뒤집어 배열로 만들기

    vector<int> vv;
    vv = solution(12345);
    for (int i = 0; i < vv.size(); ++i)
    {
        cout << vv[i];
    }
}