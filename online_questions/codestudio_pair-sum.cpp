// https://www.naukri.com/code360/problems/_697295?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s)
{
    sort(arr.begin(), arr.end());
    vector<vector<int>> r;

    for (int i = 0; i < arr.size(); i++)
    {

        for (int j = i + 1; j < arr.size(); j++)
        {
            if ((arr[i] + arr[j]) == s)
            {
                vector<int> t;
                t.push_back(arr[i]);
                t.push_back(arr[j]);
                r.push_back(t);
            }
        }
    }
    return r;
}
int main(int argc, char const *argv[])
{
    int s = 0;
    vector<int> arr = {2, -3, 3, 3, -2};
    vector<vector<int>> r = pairSum(arr, s);

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
