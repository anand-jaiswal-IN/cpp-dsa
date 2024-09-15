// https://leetcode.com/problems/move-zeroes/

#include <iostream>
#include <vector>

using namespace std;

void swap(vector<int>& arr, int i, int j){
    int t = arr[i];
    arr[i] = arr[j];
    arr[j] = t;
}

void moveZeroes(vector<int>& nums) {
    int i = 0;
    for(int j = 0; j<nums.size(); j++){
        if(nums[j] != 0)
        {
            swap(nums, i, j);
            i++;
        }
    }
}

int main(int argc, char const *argv[])
{
	vector<int> nums =  {0,1,0,3,12};
	moveZeroes(nums);

	for(int i : nums){
		cout << i << " ";
	}
	cout << endl;

	return 0;
}