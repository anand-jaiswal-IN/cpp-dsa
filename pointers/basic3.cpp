#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n = 5;
	int *ptr_n = &n;
	int *ptr_n_copy = ptr_n;
	int *ptr_n_copy2 = &*ptr_n;

	cout << "ptr_n = " << ptr_n << endl;
	cout << "ptr_n_copy = " << ptr_n_copy << endl;
	cout << "ptr_n_copy2 = " << ptr_n_copy2 << endl;

	cout << "address of `n` : " << &n << endl;
	cout << "address of `ptr_n` : " << &ptr_n << endl;

	// increase the `ptr_n` by 1
	ptr_n++;
	cout << "After increase of `ptr_n` by 1 : " << ptr_n << endl;

	return 0;
}