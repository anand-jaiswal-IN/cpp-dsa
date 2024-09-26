// https://www.naukri.com/code360/problems/count-ways-to-reach-nth-stairs_798650?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_10
#include <iostream>
using namespace std;

int innerFunc(int nStairs, int &answer){
    if(nStairs < 0) return answer;
	if(nStairs==0) answer++;
    innerFunc(nStairs-1, answer);
    innerFunc(nStairs-2 , answer);
    return answer;
}

int countDistinctWays(int nStairs) {
	int answer = 0;
	return innerFunc(nStairs, answer);
}

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	cout << endl << endl;
	for(int i = 0; i < n; i++){
		cout << countDistinctWays(arr[i]) << endl;
	}
	return 0;
}

/*
8
33
20
20
16
11
38
40
0
*/