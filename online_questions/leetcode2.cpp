// https://leetcode.com/problems/number-of-1-bits/submissions/1309165750/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	
	int n = 2147483645, count = 0;

	while(n>0)
	{
		if(n&1) {
			count++;
		}
		n = n>>1;
	}
	cout << count << endl;

	return 0;
}