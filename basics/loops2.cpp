#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

	/*
	for(;;)
	{
		cout << "hello" << endl;
	}
	*/

	/*
	for(int i = 0, j = 1, k = 2; i<=10, j<=10, k<=10; i++,j++,k++)
	{
		cout << i << " " << j << " " << k << endl;
	}
	*/

	int a = 0, b = 1, c, n = 10;

	cout << a << endl;
	cout << b << endl;

	for(int i = 0; i<n-2; i++)
	{
		c=a+b;
		cout << c << endl;

		int t = b;
		b = c;
		a = t;
	}	

	return 0;
}