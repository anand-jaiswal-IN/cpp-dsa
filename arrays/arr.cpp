#include <iostream>
using namespace std;

void printArray(int arr[], int length)
{

	for (int i = 0; i < length; ++i)
	{
		cout << arr[i] << endl;
	}
}


int main(int argc, char const *argv[])
{
	
	int n[5];
	printArray(n, 5);

	int arr[15] = {2,5};
	int length = sizeof(arr)/sizeof(int);
	printArray(arr, length);


	return 0;
}