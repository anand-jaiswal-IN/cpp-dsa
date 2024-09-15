#include <iostream>
using namespace std;

int main()
{
	int a = 5;
	bool b = true;
	char c = 'a';
	float d = 1.2;
	double e = 4.5;

	cout << "Namaste Duniya" << endl;
	cout << "Hello world \n";

	float size = sizeof(a);
	cout << "Size of a is = " << size << " bytes" << endl;
	cout << "Size of b is = " << sizeof(b) << " bytes" << endl;
	cout << "Size of c is = " << sizeof(c) << " bytes" << endl;
	cout << "Size of d is = " << sizeof(d) << " bytes" << endl;
	cout << "Size of e is = " << sizeof(e) << " bytes" << endl;

	// -------------- Type Casting ---------------

	int f = 'd'; // is a character
	cout << f << endl;

	char g = 98; // is a integer
	cout << g << endl;

	// maximum value of char is 2^8-1 =  255
	/* char h = 256; // this gives an error
	cout << h << endl; */


	// for negative numbers, we take 2nd compliment of the number for storing and for printing, again taking 2nd compliment of the stored value.

	// for positive number, first bit is 0. And for negative number, first bit is 1.

	int h = -5;
	cout << h << endl;

	signed int i = 342;
	cout << i << endl; 

	float j = 4/5.0;
	cout << j << endl;

}