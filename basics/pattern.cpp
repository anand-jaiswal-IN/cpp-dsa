#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	/*
	int n = 5;

	for(int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << j << " ";
		}
		cout << "\n";
	}
	*/

	/*
	int n = 3;

	for(int i = 0; i < n ; i++)
	{
		for(int j = 1; j <= n ; j++)
		{
			cout << j+(n*i) << " ";
		}
		cout << "\n";
	}
	*/

	/*	
	int n = 5;
	for(int i = 1; i <= n; i++)
	{
		for(int j=1; j<=i; j++)
		{
			cout << i;
		}
		cout << "\n";
	}
	*/

	/*
	int n = 5;

	for(int i=1; i<=n; i++)
	{
		for (int j=i; j>=1; j--)
		{
			cout << j;
		}
		cout << "\n";
	}
	*/

	/*
	int n = 5;
	char k = 'A';

	for(int i = 0; i<n; i++)
	{
		for(int j = 0; j<n; j++)
		{
			cout << k << " "; 
			k = (char)( (int)k + 1 );
		}
		cout << "\n";
	}
	*/

	/*
	int n = 5;
	
	for(int i = 0; i < n ; i++)
	{
		char k = 'A';

		for(int j = 0; j<=i; j++)
		{
			cout << (char)(k + i+j);
		}
		cout << "\n";
	}
	*/

	/*
	int n = 3;

	for(int i=0; i<n; i++)
	{
		char k = 'A';

		for(int j=0; j<n; j++)
		{
			cout << (char)(k+i+j);
		}
		cout << "\n";
	}
	*/

	/*
	int n = 5;

	for(int i=1; i<=n; i++)
	{
		for(int j=0; j<n-i; j++)
		{
			cout << " ";
		}
		for(int j=n-i; j<n; j++)
		{
			cout << "*";
		}

		cout << "\n";
	}
	*/

	/*
	int n = 5;

	for(int i=0; i<n; i++)
	{
		// for printing white spaces
		for(int j=0; j<i; j++){
			cout << " ";
		}

		// for printing *
		for(int j=i; j<n; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	*/

	int n = 5;

	for(int i=1; i<=n; i++)
	{
		// n*2-1
		for(int j=0; j<n-i; j++)
		{
			cout << " ";
		}
		for(int j=1; j<=i; j++)
		{
			cout << j; 
		}
		for(int j=i-1; j>=1; j--)
		{
			cout << j;
		}

		cout << "\n";
	}



	return 0;
}