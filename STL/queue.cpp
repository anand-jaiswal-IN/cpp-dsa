// queue data structures is "first in first out"
#include <iostream>
#include <queue>

using namespace std;

int main(int argc, char const *argv[])
{
	queue<string> a;
	a.push("first element");
	a.push("second element");
	a.push("third element");
	a.push("fourth element");

	cout << "Size before pop : " << a.size() << endl;
	cout << "First element : " << a.front() << endl;

	a.pop();

	cout << "First element : " << a.front() << endl;
	cout << "Size after pop : " << a.size() << endl;
	return 0;
}