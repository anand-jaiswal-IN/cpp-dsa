#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int a = 5;
	int b = a;

	cout << "value of `a` before increasing : " << a << endl;
	a++;
	cout << "value of `a` after increasing : " << a << endl;

	cout << "value of `b` before increasing : " << b << endl;
	b++;
	cout << "value of `b` after increasing : " << b << endl;

	cout << "&a = " << &a << endl;
	cout << "&b = " << &b << endl;

	return 0;
}