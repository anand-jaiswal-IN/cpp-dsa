#include <iostream>
using namespace std;

void printArr(int arr[], int length)
{
	// printing arrays value
	for (int i = 0; i < length; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void swapAlternates(int arr[], int length)
{
	// if length is odd then reduce the length value by 1
	if(length%2!=0) length-=1;

	// swapping alternates elements
	int i = 0;
	while(i < length)
	{
		int t = arr[i];
		arr[i] = arr[i+1];
		arr[i+1] = t;

		i+=2;
	}
}

int main(int argc, char const *argv[])
{
	int l = 6;
	int arr[l] = {1,2,3,4,5, 6};
	swapAlternates(arr,l);
	printArr(arr, l);
	return 0;
}