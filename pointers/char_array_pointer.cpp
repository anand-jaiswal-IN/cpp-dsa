#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	char name[6] = "anand";
	char *ptr_name = &name[0]; // take address of first elem of name

	cout << "ptr_name = "  << ptr_name << endl; // prints full name
	cout << "name = " << name << endl;

	char a = 'b';
	char *ptr_a = &a;
	cout << "*ptr_a = " << *ptr_a << endl;
	cout << "ptr_a = " << ptr_a << endl;


	/*
	RISKY ZONE
	
	char *ptr_c = "jaiswal";
	cout << *ptr_c << endl;
	*/
	return 0;
}