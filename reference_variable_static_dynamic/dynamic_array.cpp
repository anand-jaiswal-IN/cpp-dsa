#include <iostream>
using namespace std;

int sumArray(int *arr, int n){
	int s = 0;
	for(int i = 0; i < n; i++) s+=arr[i];
	return s;
}

int main(int argc, char const *argv[])
{
	/** creating the array in heap memory */
	int n;
	cout << "Enter the size of array : ";
	cin >> n;

	int *arr = new int[n];

	// taking inputs in `arr` array
	for(int i = 0; i < n ; i++)
		cin >> arr[i];
	
	int sum = sumArray(arr, n);
	cout << "sum = " << sum << endl;

	/**

	NOTE : We can use `delete` keyword to delete dynanic memory in heap 
	because static memory are deleted automatically but to remove (delete) dynamic memory
	one should use `delete` keyword.


	for eg. delete n; for deleting dynamic heap n.
	To delete dynamic array, one should use. delete []arr;

	*/
	return 0;
}