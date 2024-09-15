// https://www.naukri.com/code360/problems/intersection-of-2-arrays_1082149?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1

#include <iostream>
#include <vector>
#include <limits>

using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    vector<int> r;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr1[i] == arr2[j])
            {
                r.push_back(arr1[i]);
                // arr2.erase(remove(arr2.begin(), arr2.end(), arr2[j]));
                arr2[j] = __INT_MAX__;
                break;
            }
        }
    }
    return r;
}

vector<int> findArrayIntersection2(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    // pointers approach (if element is found in arr2 then `j` will start searching from next element)

    vector<int> r;

    int i = 0, k = 0;

    while (i < n)
    {
        int j = k;
        while (j < m)
        {
            if (arr1[i] == arr2[j])
            {
                r.push_back(arr1[i]);
                k = j + 1;
                break;
            }
            j++;
        }
        i++;
    }
    return r;
}

vector<int> findArrayIntersection3(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    /* well optimized solution */

    vector<int> r;

    int k = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = k; j < m; j++)
        {
            // if arr2 search element is bigger than arr1 searching element then break the loop because upcoming search element is always bigger than searching element

            if (arr1[i] < arr2[j])
                break;
            if (arr1[i] == arr2[j])
            {
                k = j + 1;
                r.push_back(arr1[i]);
                break;
            }
        }
    }
    return r;
}

vector<int> findArrayIntersection4(vector<int> &arr1, int n, vector<int> &arr2, int m)
{

    vector<int> r;

    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            r.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
            i++;
        else
            j++;
    }
    return r;
}
int main(int argc, char const *argv[])
{
    vector<int> arr1 = {1, 4, 5};
    vector<int> arr2 = {3, 4, 5};
    vector<int> r = findArrayIntersection4(arr1, arr1.size(), arr2, arr2.size());

    for (int i = 0; i < r.size(); i++)
    {
        cout << r[i] << endl;
    }

    return 0;
}
