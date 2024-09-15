#include <iostream>
using namespace std;

void printArray(int arr[], int length)
{

	for (int i = 0; i < length; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void swapNumbers(int arr[], int index1, int index2)
{
	int t = arr[index1];
	arr[index1] = arr[index2];
	arr[index2] = t;
}

void reverseArray(int arr[], int length)
{
	int start = 0;
	int end = length-1;

	while(start<=end)
	{
		swapNumbers(arr, start, end);
		start++;
		end--;
	}

}	

int main(int argc, char const *argv[])
{
		
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int length = sizeof(arr)/sizeof(int);

	printArray(arr, length);

	/*
	for(int i=0; i<(length/2); i++)
	{
		int t = arr[i];
		arr[i] = arr[length-1-i];
		arr[length-1-i] = t;
	}

	printArray(arr, length);
	*/

	reverseArray(arr, length);
	printArray(arr, length);
	return 0;
}