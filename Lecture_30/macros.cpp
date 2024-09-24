#include <iostream>
/** macros in c++. 
 * When PI is used anywhere, 
 * it replaces the value of it. It does not consume memory 
*/
#define PI 3.14 
#define min(a, b) ((a < b) ? a : b) // macros like inline function
using namespace std;

int main(int argc, char const *argv[])
{
	int rad = 5;
	double conference = 2 * PI * rad;
	cout << "conference = " << conference << endl;
	cout << "min(12,65) = " << min(12,65) << endl;
	return 0;
}