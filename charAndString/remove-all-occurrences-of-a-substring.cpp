// https://leetcode.com/problems/remove-all-occurrences-of-a-substring/

#include <iostream>
using namespace std;

string removeOccurrences(string s, string part) {

	while(s.find(part) < s.size()) {
		int i = s.find(part); // return the first index of substring find in s;
		s.erase(i, part.size()); // remove the part of the substring
	}
	cout << s << endl;
	return s;
}

string removeOccurrences2(string s, string part) {
	for(int i = 0; i < s.length(); i++){
		if(s[i] == part[0]){
			bool substr = true;
			for(int j = 1; j < part.length(); j++)
				if(s[i+j] != part[j]) {substr = false; break;}

			if(substr) {s.erase(i, part.size()); i =0;}
		}
	}
	return s;
}

int main(int argc, char const *argv[])
{
	string s = "daabcbaabcbc", part = "abc";
	
	string r = removeOccurrences2(s, part);
	cout << r << endl;
	return 0;
}