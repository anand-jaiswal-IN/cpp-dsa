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

void swapAlternate(int arr[],int length)
{
	int i = 0;
	while(i<length-1)
	{
		// swapping alternate
		int t = arr[i];
		arr[i] = arr[i+1];
		arr[i+1] = t;
		i+=2;
	}
}

int main(int argc, char const *argv[])
{
		
	int arr[11] = {1,2,3,4,5,6,7,8,9,10, 11};
	int length = sizeof(arr)/sizeof(int);
	printArray(arr, length);

	swapAlternate(arr, length);
	printArray(arr, length);


	return 0;
}