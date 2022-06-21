#include <iostream>
#include <vector>
#include <string>

using namespace std;

double Average(vector<int> arr);

int main()
{
	// Æò±Õ ±¸ÇÏ±â
	vector<int> vec = { 1,2,3,4 };
	cout << Average(vec);
}

double Average(vector<int> arr)
{
	double total = 0;
	for (int i = 0; i < arr.size(); ++i)
	{
		total += arr[i];
	}
	return total / arr.size();
}