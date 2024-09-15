#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

	int a,b;
	cout << "Enter value of a :" << endl;
	cin >> a;
	cout << "Enter value of b :" << endl;
	cin >> b;

	cout << "a&b is : " << (a&b) << endl;
	cout << "a|b is : " << (a|b) << endl;
	cout << "~a is : " << (~a) << endl;
	cout << "a^b is : " << (a^b) << endl;
	

	// if last bit is 0 then number is odd else even

	int n;
	cout << "Enter the value of n : " << endl;
	cin >> n;
	if (n&1) cout << n << " is odd" << endl;
	else cout << n << " is even" << endl;


	return 0;
}