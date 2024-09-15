// https://www.naukri.com/code360/problems/search-in-rotated-sorted-array_1082554?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2

#include <iostream>
#include <vector>

using namespace std;

int pivotIndex(vector<int> &arr)
{
	int s = 0, e = arr.size()-1, m = s + (e-s)/2;

	if (arr[s] <= arr[e]) return 0;	

	while(s<e)
	{
		if (arr[m] >= arr[0]) s = ++m;
		else e = m;
		m = s + (e-s)/2;
	}

	return s;
}

int binarySearch(vector<int> &arr , int k, int s, int e)
{
	cout << "Start Index : " << s << endl;
	cout << "End Index : " << e << endl;

	int m = s + (e-s)/2;
	
	while(s<=e)
    {
    	if(k == arr[m]) return m;
    	else if (k > arr[m]) s = ++m;
    	else if (k < arr[m]) e = --m;
    	m = s + (e-s)/2;
    }
    return -1;
}

int search(vector<int>& arr, int n, int k)
{
    int pivot = pivotIndex(arr);

    cout << "Pivot Index is : " << pivot << endl;

    if(pivot == 0) return binarySearch(arr, k, 0, n-1);

    int r = binarySearch(arr,k,0,pivot-1);
    if(r != -1) return r;
    return binarySearch(arr, k , pivot, n-1);
}

int search2(vector<int>& arr, int n, int k){
	int pivot = pivotIndex(arr);

    cout << "Pivot Index is : " << pivot << endl;

    if(pivot == 0) return binarySearch(arr, k, 0, n-1);

    if(arr[pivot] <= k && k <= arr[n-1] ) return binarySearch(arr, k, pivot, n-1);
    else return binarySearch(arr, k, 0, pivot-1);
}

void printArr(vector<int> &arr)
{
	cout << "Array : ";
	for(int i = 0; i < arr.size() ; i++)
	{
		cout << arr[i] << ", ";
	}
	cout << endl;
}

int main(int argc, char const *argv[])
{
	vector<int> arr = {10, 11, 1, 2, 3 ,4 ,5 ,6 ,9 };
	int k = 9;

	printArr(arr);

	int r = search2(arr, arr.size(), k);

	cout << r << endl;
	return 0;
}