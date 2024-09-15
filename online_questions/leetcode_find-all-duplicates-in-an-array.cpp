// https://leetcode.com/problems/find-all-duplicates-in-an-array/

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

vector<int> findDuplicates(vector<int> &nums)
{

	sort(nums.begin(), nums.end());
	vector<int> r;

	for (int i = 0; i < (nums.size() - 1); i++)
	{
		if (nums[i] == nums[i + 1])
			r.push_back(nums[i]);
	}
	return r;
}

vector<int> findDuplicates2(vector<int> &nums)
{

	vector<int> r;

	unordered_map<int, int> occurences;
	for (int i = 0; i < nums.size(); i++)
		occurences[nums[i]]++;

	for (auto i = occurences.begin(); i != occurences.end(); i++)
		if (i->second == 2)
			r.push_back(i->first);

	return r;
}


int main(int argc, char const *argv[])
{
	vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};
	vector<int> r = findDuplicates2(nums);

	for (int i = 0; i < r.size(); i++)
	{
		cout << r[i] << " ";
	}
	cout << endl;
	return 0;
}
