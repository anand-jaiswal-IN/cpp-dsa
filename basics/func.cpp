#include <iostream>
using namespace std;

int power(int base, int pow)
{
	int a = 1;
	for (int i = 0; i < pow; ++i) a*=base;
	return a;
}

bool isEven(int n)
{
	if(n%2==0) return true;
	return false;
}

int factorial(int n)
{
	int a = n;
	int result = 1;
	while(a>1)
	{
		result*=a;
		a--;
	}
	return result;
}

int nCr(int n, int r) {return factorial(n)/(factorial(r)*factorial(n-r));}
int nPr(int n, int r) {return factorial(n)/factorial(n-r);}

int numberOfBits(int a, int b)
{
	int count = 0;

	while((a>0) || (b>0))
	{
		if(a&1==1) count+=1;
		if(b&1==1) count+=1;
		a>>=1; b>>=1;
	}

	return count;
}	


int main(int argc, char const *argv[])
{
	int a = power(2,3);
	cout << a << endl;
	cout << "is even ? " << isEven(a) << endl;
	cout << "factorial : " << factorial(a) << endl;
	cout << "no. of combination : " << nCr(5,3) << endl;
	cout << "nPr : " << nPr(5,3) << endl;
	cout << "Number of set bits in 3 & 5 : "  << numberOfBits(3,5) << endl;
	return 0;
}