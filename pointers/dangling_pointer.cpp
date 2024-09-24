#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int *ptr;
	{
		int n = 17;
		ptr = &n;
	}
	cout << "ptr = " << ptr << endl;
	(*ptr)++;
	cout << "ptr = " << ptr << endl;
	cout << "*ptr = " << *ptr << endl;


	return 0;
}