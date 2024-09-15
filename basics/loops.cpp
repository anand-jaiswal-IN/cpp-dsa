#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n = 100;

	{
		int i = 0;
		int sum = 0;

		while(i<=n){
			sum += i;
			i += 2;
		}
		cout << "natural sum : " << sum << endl;
	}

	{
		int i = 0;
		int sum = 0;

		while(i<=n){
			sum += i;
			i += 1;
		}
		cout << "even sum : " << sum << endl;
	}
	
}