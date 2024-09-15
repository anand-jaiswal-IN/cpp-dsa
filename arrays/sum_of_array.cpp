#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n=0,a,s=0;
	cout << "Enter the value 'n' : ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin>>a;
		s+=a;
	}
	cout << "sum : " << s << endl;

	return 0;
}