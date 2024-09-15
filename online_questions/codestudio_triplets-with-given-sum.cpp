// https://www.naukri.com/code360/problems/triplets-with-given-sum_893028?source=youtube&campaign=LoveBabbar_Codestudiovideo1&utm_source=youtube&utm_medium=affiliate&utm_campaign=LoveBabbar_Codestudiovideo1

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> findTriplets(vector<int> arr, int n, int K)
{
    sort(arr.begin(), arr.end());
    vector<vector<int>> r;

    for (int i = 0; i < n; i++)
    {
        if (i > 0 && arr[i] == arr[i - 1])
            continue;
        for (int j = i + 1; j < n; j++)
        {
            if (j > i + 1 && arr[j] == arr[j - 1])
                continue;
            for (int k = j + 1; k < n; k++)
            {
                if (k > j + 1 && arr[k] == arr[k - 1])
                    continue;
                if ((arr[i] + arr[j] + arr[k]) == K)
                {
                    vector<int> t = {arr[i], arr[j], arr[k]};
                    r.push_back(t);
                    break;
                }
            }
        }
    }

    return r;
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {10, 5, 5, 5, 2};
    int K = 12;
    vector<vector<int>> r = findTriplets(arr, arr.size(), K);

    for (int i = 0; i < r.size(); i++)
    {
        for (int j = 0; j < r[i].size(); j++)
        {
            cout << r[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
