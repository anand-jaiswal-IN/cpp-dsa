// https://leetcode.com/problems/spiral-matrix/

#include <iostream>
#include <vector>

using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
	int startRow = 0, 
	endRow = matrix.size()-1, 
	startCol = 0, 
	endCol = matrix[0].size()-1;

	vector<int> ans;

	int decidingFactor = 1; 
	/* 
	1 -> traverse left to right rows
	2 -> traverse up to down cols
	3 -> traverse right to left rows
	4 -> traverse down to up cols
	*/

	while(startRow <= endRow && startCol <= endCol){

		if(decidingFactor == 1){
			for(int i = startCol; i <= endCol; i++){
				ans.push_back(matrix[startRow][i]);
			}
			decidingFactor = 2;
			startRow++;
		}
		else if(decidingFactor == 2){
			for(int i = startRow; i <= endRow; i++){
				ans.push_back(matrix[i][endCol]);
			}
			decidingFactor = 3;
			endCol--;
		}

		else if(decidingFactor == 3){
			for(int i = endCol; i >= startCol; i--){
				ans.push_back(matrix[endRow][i]);
			}
			decidingFactor = 4;
			endRow--;
		}
		else if(decidingFactor == 4){
			for(int i = endRow; i >= startRow; i--){
				ans.push_back(matrix[i][startCol]);
			}
			decidingFactor = 1;
			
			startCol++;
		}
	}
	return ans;
}

vector<int> spiralOrder2(vector<vector<int>>& matrix) {
	int startRow = 0, 
	endRow = matrix.size()-1, 
	startCol = 0, 
	endCol = matrix[0].size()-1;

	vector<int> ans;
	/* 
	1 -> traverse left to right rows
	2 -> traverse up to down cols
	3 -> traverse right to left rows
	4 -> traverse down to up cols
	*/

	while(startRow <= endRow && startCol <= endCol){

		for(int i = startCol; i <= endCol; i++){
			ans.push_back(matrix[startRow][i]);
		}
		startRow++;

		for(int i = startRow; i <= endRow; i++){
			ans.push_back(matrix[i][endCol]);
		}
		endCol--;

		if(startRow <= endRow){
			for(int i = endCol; i >= startCol; i--){
				ans.push_back(matrix[endRow][i]);
			}
			endRow--;
		}
		if(startCol <= endCol)	{
			for(int i = endRow; i >= startRow; i--){
				ans.push_back(matrix[i][startCol]);
			}
			startCol++;
		}
	}
	return ans;
}
int main(int argc, char const *argv[])
{
	vector<vector<int>> matrix = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
	vector<int> answer = spiralOrder2(matrix);

	// printing answer
	for(int i = 0; i < answer.size(); i++){
		cout << answer[i] << " ";
	}cout << endl;
	return 0;
}