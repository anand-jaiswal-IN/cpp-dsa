// https://leetcode.com/problems/merge-sorted-array/description/

#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n, vector<int> &nums3){
    nums3.resize(m + n);
    int i = 0, j = 0, k = 0;
    while (i < m && j < n)
    {
        if (nums1[i] == nums2[j])
        {
            nums3[k++] = nums1[i++];
            nums3[k++] = nums2[j++];
        }
        else if (nums1[i] < nums2[j])
        {
            nums3[k++] = nums1[i++];
        }
        else
        {
            nums3[k++] = nums2[j++];
        }
    }
    while (i < m)
    {
        nums3[k++] = nums1[i++];
    }

    // Add remaining elements from nums2 if any
    while (j < n)
    {
        nums3[k++] = nums2[j++];
    }
}

void merge2(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = m - 1;  // Pointer for the last valid element in nums1
    int j = n - 1;  // Pointer for the last element in nums2
    int k = m + n - 1;  // Pointer for the last position in nums1

    // Merge from the end
    while (j >= 0) {
        if (i >= 0 && nums1[i] > nums2[j]) {
            nums1[k--] = nums1[i--];
        } else {
            nums1[k--] = nums2[j--];
        }
    }
}

int main(int argc, char const *argv[])
{

    /*
        vector<int> nums1 = {1, 2, 3, 4};

        vector<int> nums2 = {2, 5, 6};

        vector<int> nums3;

        merge(nums1, nums1.size(), nums2, nums2.size(), nums3);

        for (int i = 0; i < nums3.size(); i++)
            cout << nums3[i] << " ";
        cout << endl;
    */
   
    vector<int> nums1 = {1,2,3,0,0,0};
    int m = 3;

    vector<int> nums2 = {2,7,8,9};
    int n = 4;

    merge2(nums1, m , nums2, n);

    for (int i = 0; i < nums1.size(); i++)
        cout << nums1[i] << " ";
    cout << endl;
    return 0;
}
