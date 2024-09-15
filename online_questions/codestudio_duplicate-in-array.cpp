// https://www.naukri.com/code360/problems/duplicate-in-array_893397?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1&leftPanelTabValue=PROBLEM

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findDuplicate(vector<int> &arr)
{
    int r = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        r ^= arr[i];
    }
    for (int i = 1; i <= (arr.size() - 1); i++)
    {
        r ^= i;
    }
    return r;
}

int findDuplicate2(vector<int> &arr)
{
    int r = arr[0];
    for (int i = 1; i <= (arr.size()-1); i++)
    {
        r ^= arr[i];
        r^=i;
    }
    return r;
}

int findDuplicate3(vector<int> &arr)
{
    sort(arr.begin(), arr.end());

    for (int i = 0; i < (arr.size()-1); i++)
    {
        if(arr[i] == arr[i+1]) return arr[i];
    }
    return 0;
    
}
int main(int argc, char const *argv[])
{
    vector<int> arr = {6 ,3 ,2 ,5 ,4 ,1, 6};
    int p = findDuplicate3(arr);
    cout << p << endl;
    return 0;
}
