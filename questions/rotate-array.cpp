#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> &arr){
	for(int i = 0; i < arr.size(); i++)
		cout << arr[i] << " ";
	cout << endl;
}
void rotate_array_by_1(vector<int> &arr) {
	vector<int> temp(arr.size());

	temp[0] = arr[arr.size()-1];

	for(int i = 0; i < arr.size()-1; i++){
		temp[i+1] = arr[i];
	}
	arr = temp;
}
void rotate_array(vector<int> &arr, int m){
	for(int i = 0; i < m ; i++)
		rotate_array_by_1(arr);
}
void rotate_array2(vector<int> &arr, int m){
	if(arr.size()==1) return;
	vector<int> temp(arr.size());

	for(int i = 0; i < arr.size(); i++){
		if(i+m>arr.size()-1) temp[i+m-arr.size()] = arr[i];
		else temp[i+m] = arr[i];
	}
	arr = temp;
}
void rotate_array3(vector<int> &arr, int m){
	vector<int> temp(arr.size());

	for(int i = 0; i<arr.size(); i++)
		temp[(i+m)%arr.size()] = arr[i];

	arr = temp;
}
int main(int argc, char const *argv[])
{
	vector<int> arr = {1,2};
	rotate_array3(arr,5);
	printVector(arr);
	return 0;
}