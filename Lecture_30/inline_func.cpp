#include <iostream>
using namespace std;

inline int getMax(int& a, int& b)  {
	return (a>b) ? a : b;
}

int main(int argc, char const *argv[])
{
	int a = 51, b = 10;
	int ans = getMax(a,b);
	cout << ans << endl;
	return 0;
}

// when inline function is called, it's body is replaced where function is called