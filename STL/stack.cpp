// Stack is the data structure in which - (first in last out)

#include <iostream>
#include <stack>

using namespace std;

int main(int argc, char const *argv[])
{
	stack<int> a;
	a.push(12);
	a.push(13);
	a.push(14);

	cout << "Top elem is : " << a.top() << endl;
	a.pop();
	cout << "Top elem is : " << a.top() << endl;

	return 0;
}