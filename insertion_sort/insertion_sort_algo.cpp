#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> &arr){
	for(int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void insertion_sort(vector<int> &arr) {
	for (int i = 1; i < arr.size(); ++i)
	{
		for(int j = i; j >= 0; --j) {
			if(arr[j-1] < arr[j]) break;

			int t = arr[j];
			arr[j] = arr[j-1];
			arr[j-1] = t;
		}
	}
}

void insertion_sort2(vector<int> &arr) {

	for (int i = 1; i < arr.size(); i++) {
		int j = i;
		int v = arr[j];

		while(j>=0){
			if(arr[j-1] < v) break;
			arr[j] = arr[j-1];
			j--;
		}

		arr[j] = v;
	}
}

int main(int argc, char const *argv[])
{
	// vector<int> arr2 = {4,10,2,11,5,6,1};
	// vector<int> arr = {9,8,7,6,5,4,3,2,1};
	vector<int> arr = {10, 34, 12, 14, 54, 12, 15};


	insertion_sort2(arr);
	printVector(arr);

	return 0;
}


/* In insertion sort algorithm, we compare previous element with current element. Insert the value where it is suitable.
Adoptable and  stable algorithm. */