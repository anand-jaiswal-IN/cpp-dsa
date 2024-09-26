#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int> &arr, int size){
	if(size == 0 || size == 1) return true;
	if(arr[size-2] > arr[size-1]) return false;
	return isSorted(arr, size-1);
}	

int sum_array_elems(vector<int> &arr, int size, int sum = 0){
	if(size == 0) return sum;
	sum += arr[size-1];
	return sum_array_elems(arr, size-1, sum);
}

int linearSearch(vector<int> arr, int size, int target){
	if(size == 0) return -1;
	if(arr[size-1] == target) return size-1;
	return linearSearch(arr, size-1, target);
}


int binarySearch(vector<int> &arr, int target, int end , int start = 0){
	if (start > end) return -1; 
    int mid = start + (end - start) / 2;

    if (target == arr[mid]) return mid;
    else if (target < arr[mid]) return binarySearch(arr, target, mid - 1, start);
    else return binarySearch(arr, target, end, mid + 1);
}

int main(int argc, char const *argv[])
{
	vector<int> arr = {1,2,3,4,5};
	// vector<int> arr = {};
	cout << binarySearch(arr, 1, arr.size()-1) << endl;
	return 0;
}