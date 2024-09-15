// https://www.naukri.com/code360/problems/reverse-the-order-of-words-in-a-string_1264991

#include <iostream>
using namespace std;

void reverseWord(string &word){
	string w = "";
	for(int i = word.length()-1; i >= 0; i--)
		w+=word[i];
	word = w;
}

string reverseOrderWords(string str) {
	str.insert(0, " ");
    string revString = "";
    string word = " ";
	for(int i = str.length()-1; i >= 0; i--){
	   	if(str[i] == ' ')
    	{
    		reverseWord(word);
    		revString = revString + word;
    		word = "";
    	}
    	word += str[i];
	}
	// for(int i = 0; i < str.length(); i++){
	// 	if(str[i] == ' ') break
	// 	revString+=str[i];
	// }
   
   return revString;
}

int main(int argc, char const *argv[])
{
	string str = "when all else fails reboot";
	string s = reverseOrderWords(str);
	cout << s << endl;
	return 0;
}