#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	
	int row;
	// cout << "Enter the row size : ";
	cin >> row;

	int **arr = new int *[row];
	int *arr_col_length = new int [row];

	// taking the input
	for(int i = 0 ; i < row; i++){
		int col;
		cin >> col;
		arr[i] = new int [col];
		arr_col_length[i] = col;

		for(int j = 0 ; j < col ; j++){
			cin >> arr[i][j];
		}
	}
	cout << endl;
	// output the array
	for(int i = 0 ; i < row; i++){
		for(int j = 0; j < arr_col_length[i]; j++){
			cout << arr[i][j] << " ";
		} cout << endl;
	}

	return 0;
}