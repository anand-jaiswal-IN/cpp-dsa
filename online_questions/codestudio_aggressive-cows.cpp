// https://www.naukri.com/code360/problems/aggressive-cows_1082559?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPossibleAnswer(vector<int> &stalls, int k, int m)
{
	int fillingCowsCount = 1, t = stalls[0];

	for(int i = 1; i < stalls.size(); i++){

		if(stalls[i] - t >= m){
			t = stalls[i];
			if(++fillingCowsCount >= k) return true;
		}

	}
	return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
	sort(stalls.begin(), stalls.end());

	// minimum distance can be only 1 and maximum distance can be end-value - first-value
	int s = 1, e = stalls.back() - stalls.front(), ans = -1;

	while(s<=e){
		int m = s + (e-s)/2;

		if(isPossibleAnswer(stalls, k, m)){
			ans = m;
			s = ++m;
		}else e = --m;
	}
	return ans;
}

int main(int argc, char const *argv[])
{
	vector<int> stalls = {87, 93, 51, 81, 68, 99, 59 }; // [51, 59, 68, 81, 87, 93, 99]
	// cout << "first value : " << stalls.front() << "		" << "last value : " << stalls.back() << endl;
	int k = 4;
	int result = aggressiveCows(stalls, k);
	cout << result << endl;
	return 0;
}