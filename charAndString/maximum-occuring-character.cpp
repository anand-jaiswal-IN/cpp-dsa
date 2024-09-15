// https://www.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1

#include <iostream>
#include <unordered_map>
using namespace std;

char getMaxOccuringChar(string str)
{
	unordered_map<char, int> occurences;
	for(int i = 0; i < str.length(); i++)
		occurences[str[i]]++;

	int maxFrequency = 0;
	char leastCharHavingMaxFrequency = 'a';
	
	for(auto i : occurences){
		if(i.second > maxFrequency)
		{
			maxFrequency = i.second;
			leastCharHavingMaxFrequency = i.first;
		}
		else if (i.second == maxFrequency)
		{
			if(i.first < leastCharHavingMaxFrequency)
				leastCharHavingMaxFrequency = i.first;
		}
	}

	return leastCharHavingMaxFrequency;
}

int main(int argc, char const *argv[])
{
	string str = "testsample";
	char r = getMaxOccuringChar(str);
	cout << r<< endl;

	return 0;
}