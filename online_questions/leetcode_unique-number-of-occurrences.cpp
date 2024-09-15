// https://leetcode.com/problems/unique-number-of-occurrences/

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

bool uniqueOccurrences(vector<int> &arr)
{
	unordered_map<int, int> occurences_count;

	for (int i = 0; i < arr.size(); i++)
		occurences_count[arr[i]]++;

	vector<int> occurences_count_values;

	for(auto i = occurences_count.begin(); i != occurences_count.end(); i++)
		occurences_count_values.push_back(i->second);

	for (int i = 0; i < occurences_count_values.size(); i++)
	{
		for(int j = i+1; j < occurences_count_values.size(); j++)
		{
			if(occurences_count_values[i] == occurences_count_values[j]) return false;
		}
	}
	
	return true;
}

bool uniqueOccurrences2(vector<int> &arr){

	sort(arr.begin(), arr.end());

	vector<int> occurences;

	int count = 0;
	for (int i = 0; i < arr.size(); i++)
	{
		count++;

		if (arr[i] != arr[i + 1])
		{
			occurences.push_back(count);
			count = 0;
		}
	}

	sort(occurences.begin(), occurences.end());

	for (int i = 0; i < occurences.size()-1; i++)
	{
		if(occurences[i] == occurences[i+1]) return false;
	}
	return true;

}

int main(int argc, char const *argv[])
{
	vector<int> nums = {1, 2,2,1,3};
	cout << uniqueOccurrences2(nums) << endl;
	return 0;
}