// https://leetcode.com/problems/power-of-two/description/
#include <iostream>
#include <climits>
using namespace std;

int numOfSetBit(int n)
{
	int count = 0;
	while(n>0)
	{
		if(n&1==1) count++;
		n>>=1;
	}
	return count;
}

int main(int argc, char const *argv[])
{
	
	int n = 64;
	/*
	int k = 1;

	for (int i = 1; i <= 31; i++)
	{
		if(k==n) {cout << true << endl; break;}
		if(k>n)	 {cout << false << endl; break;}
		if(k > INT_MAX/2) {cout << false << endl; break;}
		k*=2;
	}*/

	
	if(numOfSetBit(n) == 1) cout << "YES, power of 2";
	else cout << "NO, power of 2";
	

	return 0;
}