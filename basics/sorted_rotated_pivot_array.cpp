#include <iostream>
#include <vector>

using namespace std;

void rotateArr(vector<int> &arr, int n)
{	
	for(int i = 0; i < n; i++)
	{
		int lastElem = arr[arr.size()-1];

		for(int i = arr.size()-2; i >= 0; i--){
			arr[i+1] = arr[i];
		}
		arr[0] = lastElem;
	}
}

int pivotIndex(vector<int> &arr)
{
	int s = 0, e = arr.size()-1, m = s + (e-s)/2;

	if (arr[s] <= arr[e]) return 0;	

	while(s<e)
	{
		if (arr[m] >= arr[0]) s = ++m;
		else e = m;
		m = s + (e-s)/2;
	}
	return s;
}

int main(int argc, char const *argv[])
{
	vector<int> arr = {1,2,3,4,5};
	rotateArr(arr,2);

	for(int i = 0; i < arr.size(); i++){
		cout << arr[i] << " ";
	}
	cout << endl;

	int r = pivotIndex(arr);
	cout << "Pivot Index is : " << r << endl;

	return 0;
}