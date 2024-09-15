// https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n = 234;
	int sum = 0, product = 1;

	while(n>0)
	{	
		int r = n%10;
		n /= 10;
		sum+=r;
		product*=r;
	}

	int result = product - sum;
	cout << result << endl;

	return 0;
}