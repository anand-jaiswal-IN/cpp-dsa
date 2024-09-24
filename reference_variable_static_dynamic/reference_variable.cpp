#include <iostream>
using namespace std;

void increaseBy1(int &n){
	n++;
}

int main(int argc, char const *argv[])
{
	int a = 9;
	int &b = a; // `b` is the reference variable of `a`

	cout << "a = " << a << endl;
	cout << "b = " << a << endl;
	a++;

	cout << endl << "After increasing 1" << endl << endl;
	cout << "a = " << a << endl;
	cout << "b = " << a << endl;

	increaseBy1(b);
	cout << endl << "After increasing 1" << endl << endl;
	cout << "a = " << a << endl;
	cout << "b = " << a << endl;
	return 0;
}