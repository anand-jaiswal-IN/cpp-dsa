#include <iostream>
#include <array>

using namespace std;

int main(int argc, char const *argv[])
{
	
	array<int, 4> a = {10,12,34,76};

	cout << "Size of array is : " << a.size() << endl;
	cout << "Element at 2nd index is : " << a.at(2) << endl;
	cout << "is empty ? " << a.empty() << endl;
	cout << "First element : " << a.front() << endl;
	cout << "Last element : " << a.back() << endl;
	return 0;
}