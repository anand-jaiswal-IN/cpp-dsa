#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	float f = 10.5;
	float p = 2.5;
	float* ptr = &f;
	cout << &f << endl;
	cout << ptr << endl;
	(*ptr)++; // f = 11.5
	*ptr = p; // f = 2.5
	cout << *ptr << " "  << f << " " << p;

	cout << endl;

	int a[] = {1, 2, 3, 4};
	int *ptr_a = a;
	int *ptr_a0 = &a[0];
	cout << ptr_a << endl;
	cout << ptr_a0 << endl;
	cout << *(a) << " " << *(a+1);

	cout << endl;

	char b[] = "xyz";
	char *c = &b[0];
	cout << c << endl;

	return 0;
}