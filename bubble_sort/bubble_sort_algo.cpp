#include <iostream>
#include <vector>

using namespace std;


void bubbleSort(vector<int> &arr) 
{
	int count = 0;
	for (int i = 0; i < arr.size()-1; ++i)
	{
		bool isSwapped = false;
		for (int j = 0; j < arr.size()-1-i; ++j)
		{
			// swapping alternate values if bigger value is ahead to smaller values
			if(arr[j] > arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;

				isSwapped = true;
				count++;
			}
		}
		if(isSwapped == false) break;
	}
	cout << count << " number of sorted." << endl;
}

int main(int argc, char const *argv[])
{
	// vector<int> arr = {1,9,2,10,11,14,19,15,3};
	// vector<int> arr = {1,2,3,4,5};
	vector<int> arr = {8, 22, 7, 9, 31, 5, 13};
	bubbleSort(arr);

	for (int i = 0; i < arr.size(); ++i)
	{
		cout << arr[i] << " ";
	}
	return 0;
}