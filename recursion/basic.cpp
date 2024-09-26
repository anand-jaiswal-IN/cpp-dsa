#include <iostream>
using namespace std;

int factorial(int n){
	if(n==1) return 1;
	return n * factorial(n-1);
}

int power(int n, int p){
	if (p==1) return n;
	return n * power(n, p-1);
}

void printCounter(int n){
	if(n==0) return;
	printCounter(n-1);
	cout << n << " ";
}

void printCountingReverse(int n){
	if(n==0) return;
	cout << n << " ";
	printCounter(n-1);
}

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	int fact = factorial(n);
	int power_of = power(n, 4);
	cout << "fact = " << fact << endl;
	cout << "power_of = " << power_of << endl;
	printCounter(n);
	cout << endl;
	printCountingReverse(n);
	return 0;
}