// https://www.naukri.com/code360/problems/sort-0-1-2_631055?source=youtube&campaign=LoveBabbar_Codestudiovideo1&utm_source=youtube&utm_medium=affiliate&utm_campaign=LoveBabbar_Codestudiovideo1&leftPanelTabValue=PROBLEM

#include <iostream>
#include <unordered_map>

using namespace std;

void sort012(int *arr, int n)
{
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }

    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < m[j]; i++)
            cout << j << " ";
    }

    cout << endl;
}

void sort012_2(int *arr, int n)
{
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[mid], arr[low]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
            mid++;

        else
        {
            // arr[mid] = 2
            // swapping arr[mid] with arr[high]
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}
int main(int argc, char const *argv[])
{
    int n = 7;
    int arr[] = {0, 1, 2, 1, 2, 1, 2};
    sort012_2(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
