#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
		
	int n = -186;
	int bin = 0;

	if(n>0)
	{
		int i=0;
		while(n>0)
		{	
			bin = (pow(10,i) * (n&1)) + bin;
			n = n >> 1;
			i++;
		}
	}
	else 
	{
		n = -1*n;

		int i=0;
		while(n>0)
		{	
			bin = (pow(10,i) * (n&1)) + bin;
			n = n >> 1;
			i++;
		}
	}
	cout << bin << endl;
	return 0;
}