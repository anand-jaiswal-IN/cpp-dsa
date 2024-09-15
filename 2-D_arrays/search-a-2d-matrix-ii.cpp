// https://leetcode.com/problems/search-a-2d-matrix-ii/description/

#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
	int rows = matrix.size()-1;
	int colLastIndex = matrix[0].size()-1;

	for(int i = 0; i <= rows; i++){	
		if(target >= matrix[i][0] && target <= matrix[i][colLastIndex]){
			int start = 0, end = colLastIndex;
			while(start <= end){
				int mid = start+(end-start)/2;
				int elem = matrix[i][mid];
				if(elem == target) return true;
				else if (elem < target) start = mid + 1;
				else if (elem > target) end = mid - 1;
			}
		}
	}
	return false;
}

bool searchMatrix2(vector<vector<int>>& matrix, int target) {
	int right = matrix[0].size()-1, up = 0;
	while(right > -1 && up < matrix.size()){
		int elem = matrix[up][right];
		if(elem == target) return true;
		else if (target < elem) right--;
		else if (target > elem) up++;
	}
	return false;
}

int main(int argc, char const *argv[])
{
	vector<vector<int>> matrix = {
		{1,4,7,11,15},
		{2,5,8,12,19},
		{3,6,9,16,22},
		{10,13,14,17,24},
		{18,21,23,26,30}};
	int target = 10;
	int r = searchMatrix2(matrix, target);
	cout << r << endl;


	for(int i = 0; i < matrix.size(); i++){
		for(int j = 0; j < matrix[0].size(); j++){
			int target = matrix[i][j];
			bool r = searchMatrix2(matrix, target);		
			cout << "target : " << target << ", " << "Found : " << r << endl;
		}
	}
	

	return 0;
}