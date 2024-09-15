#include <iostream>
#include <vector>

using namespace std;

int findMinIndex(vector<int> &arr, int start_index, int end_index) {
	int minIndex = start_index;
	for (int i = start_index + 1; i < end_index; ++i)
	{
		if(arr[i] < arr[minIndex]) minIndex = i;
	}
	return minIndex;
}

void swap(vector<int> &arr, int index1, int index2) {
	int temp = arr[index1];
	arr[index1] = arr[index2];
	arr[index2] = temp;
}

void selectionSort(vector<int> &arr) {
	for (int i = 0; i < arr.size()-1; ++i)
	{
		int minIndex = findMinIndex(arr, i, arr.size());
		swap(arr, i, minIndex);
	}
}

int main(int argc, char const *argv[])
{
	vector<int> arr = {4,3,2,1};
	selectionSort(arr);

	for (int i = 0; i < arr.size(); ++i)
	{
		cout << arr[i] << " ";
	}
	
	return 0;
}


// At every round, i^th first elements will be sorted.

/*
selection sort is the unstable sorting algorithm
unstable means that order will not be maintained in order if values are same.
*/