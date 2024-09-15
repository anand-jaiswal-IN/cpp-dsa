// https://leetcode.com/problems/rotate-image/

#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
	int n = matrix.size();
	vector<vector<int>> ans(n, vector<int>(n));

	// for column
	for(int i = 0; i < n; i++){
		// for rows
		for(int j = n-1; j >= 0; j--){
			ans[i][n-j-1] = matrix[j][i] ;
		}
	}
	matrix = ans;
}

int main(int argc, char const *argv[])
{
	vector<vector<int>> matrix = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	rotate(matrix);

	// printing the matrix 
	for(int i = 0; i < matrix.size(); i++){
		for(int j = 0; j < matrix[0].size(); j++){
			cout << matrix[i][j] << " ";
		}cout << endl;
	}
	return 0;
}