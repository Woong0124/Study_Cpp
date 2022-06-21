#include <iostream>
#include <vector>

using namespace std;

int DotProduct(vector<int> a, vector<int> b)
{
    int result = 0;
    for (int i = 0; i < a.size(); ++i)
    {
        result += a[i] * b[i];
    }
    return result;
}

int main()
{
    // 벡터의 내적 구하기
}