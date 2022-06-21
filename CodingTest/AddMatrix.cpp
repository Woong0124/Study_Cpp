#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> AddMatrix(vector<vector<int>> arr1, vector<vector<int>> arr2);

int main()
{
	// 행렬의 덧셈
}

vector<vector<int>> AddMatrix(vector<vector<int>> arr1, vector<vector<int>> arr2)
{
    vector<vector<int>> result;
    for (int i = 0; i < arr1.size(); ++i)   // 행의 길이(arr1.size())
    {
        vector<int> iResult;
        for (int j = 0; j < arr1[0].size(); ++j)    // 열의 길이(arr1[0].size())
        {
           iResult.push_back(arr1[i][j] + arr2[i][j]);
        }
        result.push_back(iResult);
    }
    return result;
}