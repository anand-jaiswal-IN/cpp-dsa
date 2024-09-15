#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	
	int n = -123;
	int result = 0;
	while(n>0)
	{

		result = (10*result) + (n%10);
		n/=10;
	}

	cout << result << endl;
	return 0;
}