#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

void removeDuplicates(vector<int> arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                arr[i] = INT_MIN;
                break;
            }
        }
    }
}
void print2DVector(vector<vector<int>> ans)
{
    for (vector<int> i : ans)
    {
        for (int j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
}
vector<vector<int>> findTriplets(vector<int> arr, int n, int K)
{

    sort(arr.begin(), arr.end());

    cout << "Sorted arrays : ";
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                arr[i] = INT_MIN;
                break;
            }
        }
    }

    removeDuplicates(arr, n);

    cout << "Sorted arrays : ";
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    vector<vector<int>> ans;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == K)
                {
                    vector<int> e;
                    e.push_back(arr[i]);
                    e.push_back(arr[j]);
                    e.push_back(arr[k]);
                    ans.push_back(e);
                }
            }
        }
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    // vector<int> arr = {146, 14, 11, 104, 71, -137, 11, 1, 2, 0, -62, 11, -98, 5};
    // vector<int> arr = {81, -70, 8, 9, 13, 7, -187, 17, 190, 8, 4};
    vector<int> arr = {-200, 6, 14, 12, 208, 10, 16, 91, 4, -12, -84, 18, 13, 13};
    int K = 20;
    vector<vector<int>> ans = findTriplets(arr, arr.size(), K);
    print2DVector(ans);
    return 0;
}
