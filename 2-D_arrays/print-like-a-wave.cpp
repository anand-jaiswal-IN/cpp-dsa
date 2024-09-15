// https://www.naukri.com/code360/problems/print-like-a-wave_893268?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_6&leftPanelTabValue=PROBLEM

#include <iostream>
#include <vector>
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> ans;
    for(int i = 0; i < mCols; i++){
        if(i%2==0){ // if `i` is even
            for(int j = 0; j < nRows; j++){
                ans.push_back(arr[j][i]);
            }
        }else {
            for(int j = nRows-1; j > -1; j--){
                ans.push_back(arr[j][i]);
            }
        }
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    vector<vector<int>> arr = {{1,2}, {3,4}};
    vector<int> ans = wavePrint(arr, 2,2);
    // printing vector<int> ans
    for(int i : ans){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
