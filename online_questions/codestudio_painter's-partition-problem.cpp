// https://www.naukri.com/code360/problems/painter's-partition-problem_1089557?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2

#include <iostream>
#include <vector>

using namespace std;

bool isPossibleAnswer(vector<int> &boards, int k, int mid){
    int sum = 0;
    int painterCount = 1;

    for(int i = 0; i < boards.size(); i++){
        if((sum + boards[i]) > mid) {
            sum = boards[i];
            if(++painterCount > k) return false;
        }else sum+= boards[i];
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    int s = boards[0], e = 0;
    // `s` is the maximum value in boards6
    // `e` is the total sum of values in boards

    for(int i = 0; i < boards.size(); i++){
        if(boards[i] > s) s = boards[i];
        e+=boards[i];
    }
    int ans = -1;
    while(s<=e){
        int m = s + (e-s)/2;

        if(isPossibleAnswer(boards, k, m)){
            ans = m;
            e = --m;
        }else s = ++m;
    }
    return ans;
}

int main(int argc, char const *argv[])
{
	vector<int> boards = {10, 20, 30, 40, 50, 60, 70};
	int k = 3;
	int result = findLargestMinDistance(boards, k);
	cout << result << endl;
	return 0;
}