// https://www.naukri.com/code360/problems/first-and-last-position-of-an-element-in-sorted-array_1082549?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2

#include <iostream>
#include <vector>

using namespace std;

int firstOcc(vector<int>& arr, int n, int k) {
	// using binary search algo

	int s = 0, e = n-1, ans = -1;

	while(s <= e)
	{
		int m = s + ((e-s)/2);

		if(arr[m] == k)
		{
			ans = m;
			// if ((m-1 >= 0 ) && (arr[m-1] != k)) return ans;
			// else e = --m;
			e = --m;
		} 
		else if (k < arr[m]) e = --m;
		else if (k > arr[m] ) s = ++m;

		
	}
	return ans;
}
int lastOcc(vector<int>& arr, int n, int k) {
	// using binary algo

	int s = 0, e = n-1, ans = -1;

	while(s <= e)
	{
		int m = s + ((e-s)/2);

		if(arr[m] == k)
		{
			ans = m;
			// if ((m+1 <= n-1 ) && (arr[m+1] != k)) return ans;
			// else s = ++m;
			s = ++m;
		} 
		else if (k < arr[m]) e = --m;
		else if (k > arr[m] ) s = ++m;

		
	}
	return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
	pair<int, int> p;
	p.first = firstOcc(arr,n,k);
	p.second = lastOcc(arr,n,k);
    return p;
}

int totalOccurences(vector<int>& arr, int n, int k) {
	int r = ( lastOcc(arr, n,k) - firstOcc(arr,n,k) ) + 1;
	return r;
}

int main(int argc, char const *argv[])
{
	// vector<int> arr = {1,2,2,3,3,3,3,5,6};
	//vector<int> arr = {0, 0, 1, 1 ,2 ,2 ,2 ,2};
	vector<int> arr = {1,1,1,1,1,1,1,1};
	// vector<int> arr = {1,2,3,3,5};
	int key = 1;

	pair<int, int> occ = firstAndLastPosition(arr, arr.size(), key);

	cout << "First Occurence is : " << occ.first << endl;
	cout << "Last Occurence is : " << occ.second << endl;
	cout << "Total number of occurences : " << totalOccurences(arr, arr.size(), key) << endl;

	return 0;
}