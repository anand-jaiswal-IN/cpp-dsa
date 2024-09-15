#include <iostream>
using namespace std;

int getLengthOfString(char ch[]){
	int i = 0;
	while(ch[i] != '\0')
		i++;
	
	// '\0' is the null value in character array

	return i;
}

void reverseString(char ch[]){
	int chLength = getLengthOfString(ch);

	for(int i = 0; i < chLength/2; i++){
		char t = ch[i];
		ch[i] = ch[chLength-1-i];
		ch[chLength-1-i] = t;
	}
}

int main(int argc, char const *argv[])
{	
	char name[20];
	cout << "What is your name ? ";
	cin >> name;
	cout << "Your name is : " << name << endl;
	// cout << "length of your name is : " << getLengthOfString(name) << endl;
	reverseString(name);
	cout << "Reversed name is : " << name << endl;
	return 0;
}