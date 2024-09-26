#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &arr, int target, int end , int start = 0){
	if (start > end) return -1; 
    int mid = start + (end - start) / 2;

    if (target == arr[mid]) return mid;
    else if (target < arr[mid]) return binarySearch(arr, target, mid - 1, start);
    else return binarySearch(arr, target, end, mid + 1);
}

int firstOccurence(vector<int> &arr, int target, int end , int start = 0, int ans = -1){
	if(start > end) return ans;
	int mid = start + (end - start)/2;
	if(target == arr[mid]) return firstOccurence(arr, target, mid-1, start, mid);
	else if(target < arr[mid]) return firstOccurence(arr, target, mid-1, start, ans);
	else return firstOccurence(arr, target, end, mid+1, ans);
}

int lastOccurence(vector<int> &arr, int target, int end , int start = 0, int ans = -1){
	if(start > end) return ans;
	int mid = start + (end - start)/2;
	if(target == arr[mid]) return lastOccurence(arr, target, end, mid+1, mid);
	else if(target < arr[mid]) return lastOccurence(arr, target, mid-1, start, ans);
	else return lastOccurence(arr, target, end, mid+1, ans);
}

int indexOfPivot(vector<int> &arr, int end , int start = 0){
	
	if(arr.size() == 0) return -1;
	if(arr[start] <= arr[end]) return start;

	if(start == end) return start;

	int mid = start + (end - start)/2;  

	if (mid < end && arr[mid] > arr[mid + 1]) return mid;
	if (mid > start && arr[mid] < arr[mid - 1]) return mid - 1;
	
	if(arr[mid] > arr[end]) return indexOfPivot(arr, end, mid+1);
	else return indexOfPivot(arr, mid-1, start);
}

int searchRotatedArr(vector<int> &arr, int target){
	int pivot = indexOfPivot(arr, arr.size()-1);

	// if there is no pivot, then use simple binary search
	if(pivot == -1) binarySearch(arr, target, arr.size()-1, 0);

	if(arr[0] <= target && target <= arr[pivot]) return binarySearch(arr, target, pivot, 0);
	else return binarySearch(arr, target, arr.size()-1, pivot+1);
}

int squareRoot(int n, int e, int s = 0) {
	int m = s + (e-s)/2;
	int sq = m*m;
	if(m*m <= n && n < (m+1)*(m+1)) return m;
	else if (m*m > n) return squareRoot(n, s, m-1);
	else return squareRoot(n, m+1, e);
}

int main(int argc, char const *argv[])
{
	vector<int> arr1 = {2, 2, 3, 3, 4, 5, 6};
	int t1 = 3;
	vector<int> arr2 = {4, 5, 6, 7, 9, 2, 3};
	
	cout << firstOccurence(arr1, t1, arr1.size()-1) << endl;
	cout << lastOccurence(arr1, t1, arr1.size()-1) << endl;
	cout << indexOfPivot(arr2, arr2.size()-1) << endl;
	cout << searchRotatedArr(arr2, 6) << endl;
	cout << squareRoot(35,35) << endl;
	return 0;
}