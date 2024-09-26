#include <iostream>
using namespace std;

int nThFib(int n){
	int f = 0, s = 1;
	int t = f + s;

	for(int i = 0; i < n-2; i++){
		f = s;
		s = t;
		t = f + s;
	}
	return t;
}

int findFib(int f, int s, int n){
	int t = f + s;
	if(n==0) return t;
	return findFib(s, t, n-1);
}

int nThFib2(int n){
	if (n <= 0) return 0;
	else if (n == 1) return 1;
	else return findFib(0, 1, n-2);
}
int nThFib3(int n){
	if(n==0) return 0;
	if(n==1) return 1;
	return nThFib3(n-1) + nThFib3(n-2);
	
}

int main(int argc, char const *argv[])
{
	int n = 6;
	cout << nThFib(n) << endl;
	cout << nThFib2(n) << endl;
	cout << nThFib3(n) << endl;
	return 0;
}