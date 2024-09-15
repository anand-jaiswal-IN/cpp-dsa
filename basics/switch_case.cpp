#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int num = 6;

	switch(num)
	{
		case 1: cout << "First" << endl; 
				break;

		case 2: cout << "Second" << endl; 
				break;

		case 3: cout << "Third" << endl; 
				break;

		default : cout << "Default Case" << endl;
	}

	return 0;
}