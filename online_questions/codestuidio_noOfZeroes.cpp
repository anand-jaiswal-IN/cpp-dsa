// https://www.naukri.com/code360/problems/sort-0-1_624379?interviewProblemRedirection=true&search=sort%200
#include <iostream>
using namespace std;

void sortZeroesAndOne(int input[], int size)
{
    int ans[size];

    int s = 0, e = size - 1, i = 0;

    while (i < size)
    {
        if (input[i] == 0)
        {
            ans[s] = 0;
            i++;
            s++;
        }
        else
        {
            ans[e] = 1;
            i++;
            e--;
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}
int main(int argc, char const *argv[])
{
    int arr[6] = {1, 1, 0, 0, 1, 0};
    sortZeroesAndOne(arr, 6);

    return 0;
}
