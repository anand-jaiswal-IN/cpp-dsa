// https://leetcode.com/problems/peak-index-in-a-mountain-array/description/

#include <iostream>
#include <vector>

using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
	int s = 0, e = arr.size() - 1;

	while(s<=e)
	{
		int m = s + (e-s)/2;
		if(m-1 >= 0 && m+1 < arr.size() && arr[m-1] < arr[m] && arr[m+1] < arr[m]) return m;
		else if (arr[m+1]>arr[m]) s = ++m;
		else if (arr[m+1] < arr[m]) e = --m;
	}
	return -1;
}
int peakIndexInMountainArray2(vector<int>& arr) {
        int s = 0, e = arr.size() - 1;

        while(s<e)
        {
            int m = s + (e-s)/2;
            if (arr[m] < arr[m+1]) s = ++m;
            else e = m;
        }
        return s;
}

int main(int argc, char const *argv[])
{
	vector<int> arr = {3,5,3,2,0};
	cout << peakIndexInMountainArray2(arr) << endl;

	return 0;
}