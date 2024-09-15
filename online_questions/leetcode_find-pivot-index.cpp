// https://leetcode.com/problems/find-pivot-index/description/

#include <iostream>
#include <vector>

using namespace std;

int pivotIndex(vector<int>& nums) {
	vector<int> sumOfLeftMost;

	int s = 0;
	sumOfLeftMost.push_back(s);

	for(int i = 0; i < nums.size(); i++)
	{
		s+=nums[i];
		sumOfLeftMost.push_back(s);
	}

	s = 0;
	int r = -1;
	for(int i = nums.size()-1; i >= 0; i--)
	{
		if(s == sumOfLeftMost[i]) r = i;
		s+=nums[i];
	}

	return r;
}

int pivotIndex2(vector<int>& nums){

	int totalSum = 0;
	for(int i = 0; i < nums.size(); i++)
		totalSum+=nums[i];
	

	int leftSum = 0;
	for(int i = 0; i < nums.size(); i++){
		// leftSum+nums[i] // this is the current sum

		if(totalSum - (leftSum+nums[i]) == leftSum) return i;

		leftSum+=nums[i];
	}
	return -1;

}

int main(int argc, char const *argv[])
{
	vector<int> arr = {-1,-1,0,0,-1,-1};
	int r = pivotIndex2(arr);
	cout << "Pivot Index is at : " << r << endl;

	return 0;
}