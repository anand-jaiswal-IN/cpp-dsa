// https://www.naukri.com/code360/problems/check-if-the-string-is-a-palindrome_1062633?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_5&leftPanelTabValue=SUBMISSION

#include <iostream>
using namespace std;

bool has_special_char(char c){
	string inValidChars = "~!@#$%^&*()_+:/-=? ";
	for(int i = 0; i < inValidChars.size(); i++){
		if(c == inValidChars[i]) return true;
	}
	return false;
}
bool has_normal_character(char c){
	string validChars = "";
	for(int i = (int)'A'; i <= (int)'Z'; i++) validChars+=(char)i;
	for(int i = (int)'a'; i <= (int)'z'; i++) validChars+=(char)i;
	for(int i = (int)'0'; i <= (int)'9'; i++) validChars+=(char)i;
	cout << validChars << endl;
	for(int i = 0; i < validChars.size(); i++){
		if(validChars[i] == c) return true;
	}
	return false;
}
bool has_normal_character2(char c){
	if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
		return true;
	return false;
}
bool checkPalindrome(string s)
{
    string str = "";
    for(int i = 0; i < s.size(); i++){
    	if(has_normal_character2(s[i])) str+=tolower(s[i]);
    }
    cout << "str : " << str << endl;
    // check palindrome of str;
    for(int i = 0; i < str.size()/2; i++){
    	if(str[i] != str[str.size()-1-i]) return false;
    }
    return true;

}
int main(int argc, char const *argv[])
{
	string a = "9,8";

	cout << checkPalindrome(a) << endl;
	return 0;
}