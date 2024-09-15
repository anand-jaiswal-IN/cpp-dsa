// https://leetcode.com/problems/sort-colors/

#include <iostream>
#include <vector>

using namespace std;

void sortColors(vector<int> &nums)
{
    int low = 0, mid = 0, high = nums.size() - 1;
    while (mid <= high)
    {

        if (nums[mid] == 0)
        {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        }
        else if (nums[mid] == 1)
            mid++;
        else // nums[mid] == 2
        {
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}
int main(int argc, char const *argv[])
{
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    sortColors(nums);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
