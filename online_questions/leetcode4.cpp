// https://leetcode.com/problems/complement-of-base-10-integer/description/

#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
	/*
	int n = 5;
	int comp = 0;
	
	for (int i = 0; n>0; i++)
	{
		if((n&1) == 0) comp += pow(2,i);
		
		n=n>>1;
	}

	cout << comp << endl;
	*/

	int n = 5;
	int result = 0;
	int mask = 0;

	while(n!=0)
	{	
		mask = (mask<<1) | 1;
		n = n >> 1;
	}
	// here mark is 0000000...111
	cout << (~n) & mask << endl;

	return 0;
}