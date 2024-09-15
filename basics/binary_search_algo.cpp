#include <iostream>

using namespace std;

int binary_search(int arr[], int n,int k)
{
	int s = 0, e = n-1;

	while(s<=e)
	{
		int m = s + ((e-s)/2);
		/*
			lets assume, if `s` have value (2^31-1) and `e` have also same value,
			then (s+e) will be out of range of integer so we must try another way to avoid this error.
			And so we find a way to assign the value of `m = s + (e-s)/2` which means the same as `(s+e)/2`.
		*/

		if(arr[m] == k) return m;
		if (arr[m]>k) e = --m;
		else s = ++m;
	}

	return -1;
}

int main(int argc, char const *argv[])
{
	int arr[6] = {3,5,8,10,14, 24};
	int arr2[7] = {3,5,8,10,14, 24, 30};

	int r = binary_search(arr2, 7, 30);
	cout << r << endl;

	return 0;
}