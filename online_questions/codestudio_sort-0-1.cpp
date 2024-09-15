// https://www.naukri.com/code360/problems/sort-0-1_624379

#include <iostream>

using namespace std;

void sortZeroesAndOne(int input[], int size)
{
    int left = 0, right = size - 1;

    while (left <= right)
    {
        if (input[left] == 0 && left <= right)
            left++;
        if (input[right] == 1 && left <= right)
            right--;
        if (input[left] == 1 && input[right] == 0 && left <= right)
        {
            swap(input[left], input[right]);
            left++;
            right--;
        }
    }
}
int main(int argc, char const *argv[])
{
    int s = 6;
    int arr[] = {1, 1, 0, 0, 1, 0};
    sortZeroesAndOne(arr, s);

    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
