#include <iostream>
using namespace std;

void maximum_minimum(int arr[], int length)
{
	int max = arr[0], min = arr[0];
	for (int i = 1; i < length; i++)
	{
		if (arr[i]>max) max = arr[i];
		if(arr[i]<min) min = arr[i];
	}
	cout << "maximum is : " << max << endl;
	cout << "minimum is : " << min << endl;
}

int sumOfArray(int arr[], int length)
{
	int s = 0;
	for (int i = 0; i < length; i++) s+=arr[i];
	return s;
}

int main(int argc, char const *argv[])
{
	
	int arr[3] = {3,1,2};
	int l = sizeof(arr)/sizeof(int);

	maximum_minimum(arr, l);
	cout << "Sum of array : " << sumOfArray(arr, l) << endl;
	return 0;
}