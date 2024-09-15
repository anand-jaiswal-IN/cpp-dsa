// https://leetcode.com/problems/search-a-2d-matrix/

#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
	int n = matrix.size(), m = matrix[0].size();
	int left = 0, right = n*m-1;

	while(left <= right){
		int mid = (left+right)/2;
		int elem = matrix[mid/m][mid%m];
		if(elem == target) return true;
		else if (target>elem) left = mid+1;
		else if (target<elem) right = mid-1;
	}
	return false;
}

int main(int argc, char const *argv[])
{
	vector<vector<int>> matrix = {
		{1,3,5,7},
		{10,11,16,20},
		{23,30,34,60}};

	
	for(int i = 0; i < matrix.size(); i++){
		for(int j = 0; j < matrix[0].size(); j++){
			int target = matrix[i][j];
			bool r = searchMatrix(matrix, target);		
			cout << r << endl;
		}
	}
	
	int target = 30;
	bool r = searchMatrix(matrix, target);		
	cout << r << endl;
	
	return 0;
}