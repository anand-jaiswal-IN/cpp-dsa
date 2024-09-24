#include <iostream>
using namespace std;

void printArr(int *arr, int size , int start = 0, int end = 0){
	if(end == 0) end = size-1;

	for(int i = start; i < end; i++){
		cout << arr[i] << " ";
	} cout << endl;
}

int main(int argc, char const *argv[])
{
	int arr[5] = {5,6,9,1,2};
	printArr(arr, 5);
	printArr(arr, 5, 1);
	printArr(arr, 5, 1,2);
	return 0;
}