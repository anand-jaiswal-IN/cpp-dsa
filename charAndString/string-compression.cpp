// https://leetcode.com/problems/string-compression/description/

#include <iostream>
#include <vector>
using namespace std;

int compress(vector<char>& chars) {
	if(chars.size() <= 1) return chars.size();

	int c = 1;
	char ch = chars[0];
	vector<char> toReturn;

	for(int i = 1 ; i < chars.size(); i++){
		if(ch == chars[i]) c++;
		else {
			toReturn.push_back(ch);
			if(c > 1) {
				string countStr = to_string(c);

				for(char ch : countStr){
					toReturn.push_back(ch);
				}
			}
			c = 1;
			ch = chars[i];
		}
	}
	
	toReturn.push_back(ch);
    if (c > 1) {
        string countStr = to_string(c);
        for (char ch : countStr) {
            toReturn.push_back(ch);
        }
    }

	chars = toReturn;
	for(int i = 0; i < chars.size(); i++) cout << chars[i] << " ";
	cout << endl;
	return chars.size();
}
int compress2(vector<char>& chars) {
	if (chars.size() <= 1) return chars.size();

	int n = chars.size(), i = 0, ansIndex = 0;
	
	while(i < n){
		int j = i+1;
		while(j < n && chars[i] == chars[j])
			j++;
		
		chars[ansIndex++] = chars[i];
		int count = j-i;
		if (count > 1){
			string countStr = to_string(count);
			for(char ch : countStr) chars[ansIndex++] = ch;
		}
		i = j;
		
	}
	return ansIndex;
}

int main(int argc, char const *argv[])
{
	// vector<char> chars = {'a','b','b','b','b','b','b','b','b','b','b','b','b'};
	vector<char> chars = {'a'};
	// vector<char> chars = {'a', 'a', 'b', 'c', 'c'};
	int r = compress2(chars);
	cout << r << endl;

	// printing chars
	for(int i = 0; i < chars.size(); i++){
		cout << chars[i] << " ";
	}
	cout << endl;

	return 0;
}