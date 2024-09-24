#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n = 5;
	int *ptr_n = &n;
	int **ptr_ptr_n = &ptr_n;

	cout << "&n = " << &n << endl;
	cout << "ptr_n = " << ptr_n << endl;
	cout << "&ptr_n = " << &ptr_n << endl;
	cout << "ptr_ptr_n = " << ptr_ptr_n << endl;


	void *ptr;
	int n2 = 14;
	ptr = &n2;
	cout << "&n2 = " << &n2 << endl;
	cout << "ptr = " << ptr << endl;
	// cout << "*ptr = " << *ptr << endl; 
	/** give the error because void pointer is assigned to int pointer */


	return 0;
}