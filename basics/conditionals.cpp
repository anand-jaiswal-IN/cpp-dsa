#include <iostream>
using namespace std;

int main()
{
    /*
    int a, b;
    // a = cin.get(); // it will take character in input
    // cout << a;
    cout << "Enter the value of 'a' and 'b' " << endl;
    cin >> a >> b;
    cout << "Value of a : " << a << " and value of b : " << b << endl;
    */

    char c = '5';
    int d = c;

    /*
    cout << "ASCI of a is : " << (int)'a' << endl;
    cout << "ASCI of z is : " << (int)'z' << endl;
    cout << "ASCI of A is : " << (int)'A' << endl;
    cout << "ASCI of Z is : " << (int)'Z' << endl;
    cout << "ASCI of 0 is : " << (int)'0' << endl;
    cout << "ASCI of 9 is : " << (int)'9' << endl;
    */
    
    // for numeric value then uppercase value and then lowercase value
    if ( d >= (int)'0' && d <= (int)'9' ) 
    {
        cout << c << " is numeric value" << endl;
    }
    else if ( d >= (int)'A' && d <= (int)'Z' )
    {
        cout << c << " is uppercase value" << endl;
    }
    else if ( d >= (int)'a' && d <= (int)'b' )
    {
        cout << c << " is lowercase value" << endl;
    }
    else
    {
        cout << c << " is neither numeric, uppercase or lowercase value" << endl;
    }
}