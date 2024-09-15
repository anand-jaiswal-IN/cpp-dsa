// https://www.naukri.com/code360/problems/ayush-and-ninja-test_1097574?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2

#include <iostream>
#include <vector>

using namespace std;

bool isAnswer(vector<int> time, int mid, int numberOfDays)
{
	int daysCount = 1;
	int sum = 0;

	for(int i = 0; i < time.size(); i++)
	{
		if (sum + time[i] <= mid ) sum += time[i];
		else
		{
			daysCount ++;
			if(daysCount > numberOfDays) return false;
			sum = time[i];
		} 
	}
	cout << "daysCount : " << daysCount << endl;
	// if(daysCount < numberOfDays) return false;
	// return true;
	return true;
}

long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{	
	// m = size(time)
	// n = number of days
	int s = time[0], e = 0;

	for(int i = 0; i < m; i++)
	{
		s = max(s, time[i]);
		e+=time[i];
	}
	cout << "s : " << s << endl;
	cout << "e : " << e << endl;

	int ans = -1;

	while(s<=e)
	{
		int mid = s + (e-s)/2;

		if(isAnswer(time, mid, n)) {
			ans = mid;
			e = mid-1;
		} else s = mid+1;
	}

	return ans;

}


int main(int argc, char const *argv[])
{
	vector<int> arr = {2, 7,9 ,10, 5, 4 };
	// vector<int> arr = {1, 5, 7, 6 ,9, 7, 1 ,6 ,10, 3, 9, 5 ,2 ,10, 10, 6, 10};
	int n = 4;
	long long result = ayushGivesNinjatest(n, arr.size(), arr);
	cout << result << endl;
	return 0;
}