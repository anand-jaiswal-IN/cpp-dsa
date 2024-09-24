#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	char str[] = "world";
	char str2[] = "hello";
	cout << str2 << endl;
	cout << str << endl;
	cout << sizeof(str) << endl;
	cout << *(str + 3) << endl;
	return 0;
}