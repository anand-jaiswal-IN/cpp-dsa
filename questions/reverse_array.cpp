// https://www.naukri.com/code360/problems/reverse-the-array_1262298?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio3

#include <iostream>
#include <vector>

using namespace std;

void swap(vector<int> &arr, int i, int j)
{
    int temp = arr[j];
    arr[j] = arr[i];
    arr[i] = temp;
}
void reverse_array(vector<int> &arr)
{
    for (int i = 0; i < arr.size() / 2; i++)
    {
        swap(arr, i, arr.size() - 1 - i);
    }
}

void reverse_array_from(vector<int> &arr, int m)
{
    int c = 0;

    int end = (m + arr.size()) / 2;
    cout << "end = " << end << endl;
    for (int i = m + 1; i <= end; i++)
    {
        swap(arr, i, arr.size() - 1 - c);
        c++;
    }
}
void reverse_array_from2(vector<int> &arr, int m)
{
    int s = m+1, e = arr.size()-1;
    while(s<=e){
        swap(arr, s, e);
        s++; e--;
    }
}
int main(int argc, char const *argv[])
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    reverse_array_from2(arr, 3);

    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
