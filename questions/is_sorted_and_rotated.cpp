#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void rotate_array(vector<int> &arr, int m){
	vector<int> temp(arr.size());

	for(int i = 0; i<arr.size(); i++)
		temp[(i+m)%arr.size()] = arr[i];

	arr = temp;
}

bool is_sorted_and_rotated(vector<int> arr){

	vector<int> temp = arr;
	
	sort(temp.begin(), temp.end());

	int m = arr.size()-1;

	for(int i = 0; i < arr.size()-1; i++){
		if(arr[i] < arr[i+1]) m--;
		else break;
	}
	
	rotate_array(arr, m);

	if(temp == arr) return true;
	return false;
}

int main(int argc, char const *argv[])
{
	vector<int> arr = {1,2,3,4};
	bool t = is_sorted_and_rotated(arr);
	cout << t << endl;

	return 0;
}