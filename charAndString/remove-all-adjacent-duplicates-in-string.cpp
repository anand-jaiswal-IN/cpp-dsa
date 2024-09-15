// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/

#include <iostream>
using namespace std;

string removeDuplicates(string s) {

	for(int i = 1; i < s.size(); i++){
		if(s[i-1] == s[i]){
			s.erase(i-1,2);
			i = 0;
		}
	}
	return s;
}
string removeDuplicates2(string s) {
	string toReturn = "";
	for(int i = 0; i < s.length(); i++){
		if(toReturn == "" || toReturn[toReturn.size()-1] != s[i]){
			// push kr do
			toReturn+=s[i];
		}else {
			toReturn.pop_back();
		}
	}
	return toReturn;
}
int main(int argc, char const *argv[])
{
	string st = "abbaca";
	string result = removeDuplicates2(st);
	cout << result << endl;
	return 0;
}