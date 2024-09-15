#include <iostream>
using namespace std;

void reverseWord(string &word){
	string w = "";
	for(int i = word.length()-1; i >= 0; i--)
		w+=word[i];
	word = w;
}

string reverseCharsOfWords(string sentence){
	sentence+= " ";
	string reverse_chars_words = "";

	string word = " ";
	for(int i = 0; i < sentence.length(); i++){
		if(sentence[i] == ' ')
		{
			reverseWord(word);
			reverse_chars_words += word;
			word = "";
		}
		word+=sentence[i];
	}
	return reverse_chars_words;

}

int main(int argc, char const *argv[])
{
	
	string sentence = "My name is love";
	string s = reverseCharsOfWords(sentence);
	cout << s << endl;
	return 0;
}