#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	char ch = 'a';
	char *ptr_ch = &ch;
	cout << "sizeof(ch) = " << sizeof(ch) << endl;
	cout <<  "sizeof(ptr_ch) = " << sizeof(ptr_ch) << endl << endl;

	char *ch2 = new char; // creating `char` in heap memory using `new` keyword
	*ch2 = 'd';
	cout << "ch2 = " << ch2 << endl;
	cout << "*ch2 = " << *ch2 << endl;
	cout << "&ch2 = " << &ch2 << endl;
	cout << "sizeof(ch2) = " << sizeof(ch2) << endl;
	cout << "sizeof(*ch2) = " << sizeof(*ch2) << endl << endl;

	return 0;
}