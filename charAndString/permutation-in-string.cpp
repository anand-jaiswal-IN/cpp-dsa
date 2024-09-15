// https://leetcode.com/problems/permutation-in-string/

#include <iostream>
using namespace std;

bool areArraysEqual(int arr1[], int arr2[], int size) {
    for(int i = 0; i < size; i++) {
        if(arr1[i] != arr2[i]) {
            return false;
        }
    }
    return true;
}

bool checkInclusion(string s1, string s2) {
	int character_count_s1[26] = {0};
	for(int i = 0; i < s1.length(); i++) {
		int index = s1[i] - 'a';
		character_count_s1[index]++;
	}

	// // printing character_count_s1
	// cout << "printing character_count_s1" << endl;
	// for(int i = 0; i < 26; i++){
	// 	cout << (char) ('a' + i) << " : " << character_count_s1[i] << ", ";
	// }
	cout << "\n\n";
	for(int i = 0; i < s2.length()-s1.length()+1; i++){

		int character_count_s2[26] = {0};
		for(int j = i; j < i+s1.length(); j++){
			int index = s2[j] - 'a';
			character_count_s2[index]++;
		}
		// for(int k = 0; k < 26; k++){
		// 	cout << (char) ('a' + k) << " : " << character_count_s2[k] << ", ";
		// }
		// cout << endl;
		if(areArraysEqual(character_count_s1, character_count_s2, 26)) return true;
	}
	return false;
}	

int main(int argc, char const *argv[])
{
	string s1 = "intention";
	string s2 = "execution";
	bool result = checkInclusion(s1, s2);
	cout << result << endl;
		
	return 0;
}