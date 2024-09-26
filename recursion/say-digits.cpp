#include <iostream>
using namespace std;

void sayDigits(int n){
	string digits[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

	while(n>0){
		int rem = n%10;
		n/=10;
		cout << digits[rem] << " ";
	}
	cout << endl;

}

// string digits[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void inner_sayDigits2(int n, string *digits){
    if(n == 0) return;
    inner_sayDigits2(n / 10, digits);
    cout << digits[n % 10] << " ";
}

void sayDigits2(int n){
    string digits[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    inner_sayDigits2(n, digits); 
}

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	sayDigits2(n);
	return 0;
}