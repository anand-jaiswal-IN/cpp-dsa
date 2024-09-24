#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	
	int row, col;
	cout << "Enter the value of `n` : ";
	cin >> row;

	cout << "Enter the value of `m` : ";
	cin >> col;

	// creating array
	int **arr = new int *[row];

	for(int i = 0; i < row ; i++){
		arr[i] = new int [col];
	}


	// taking input
	cout << "Enter the input of array : " << endl;
	for (int i = 0; i < row; ++i)
		for (int j = 0; j < col; ++j)
			cin >> arr[i][j];

	// output the array
	cout << endl << endl;
	for (int i = 0; i < row; ++i){
		for (int j = 0; j < col; ++j)
			cout <<  arr[i][j] << " ";
		cout << endl;
	}

	// releasing the memory
	for(int i = 0; i < row; i++)
		delete []arr[i];
	
	delete []arr;

	return 0;
}