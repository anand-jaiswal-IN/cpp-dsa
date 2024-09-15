// https://www.naukri.com/code360/problems/find-duplicate-in-array_1112602?interviewProblemRedirection=true&search=duplicate
#include <iostream>
#include <vector>

using namespace std;

int findDuplicate(vector<int> &arr, int n){
	int r = 0;

	for (int i=0; i<n; i++)
	{
		r^=arr[i];
	}
	return r;
}

int main(int argc, char const *argv[])
{
	vector<int> a = {1, 1, 2};
	int r = findDuplicate(a, 3);
	cout << r << endl;
	
	return 0;
}