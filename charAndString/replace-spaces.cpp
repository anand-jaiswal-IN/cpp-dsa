// https://www.naukri.com/code360/problems/replace-spaces_1172172?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_5

#include <iostream>
using namespace std;

string replaceSpaces(string &str){
	string st = "";
	for(int i = 0; i < str.length(); i++){
		if(str[i] == ' ') st+= "@40";
		else st+=str[i];
	}
	return st;
}

int main(int argc, char const *argv[])
{
	
	string a = "Coding Ninjas Is A Coding Platform";
	string b = replaceSpaces(a);
	cout << b << endl;
	return 0;
}