#include <iostream>
#include <list>

using namespace std;

void printArray(list<int> arr)
{
	for (int i : arr)
	{
		cout << i << " ";
	}
	cout << endl;
} 

int main(int argc, char const *argv[])
{
	list<int> l;
	l.push_back(4);
	l.push_front(5);
	printArray(l);

	l.erase(l.begin());

	printArray(l);

	list<int> n(5,10);
	printArray(n);

	return 0;
}