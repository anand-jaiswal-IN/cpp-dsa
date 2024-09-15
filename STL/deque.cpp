#include <iostream>
#include <deque>
#include <bits/stdc++.h> 
using namespace std;

void printArray(deque<int> arr)
{
	for (int i : arr){
		cout << i << " ";
	}
	cout << endl;
}

int main(int argc, char const *argv[])
{
	deque<int> d;
	d.push_back(1);
	d.push_front(2);
	d.push_back(45);
	d.push_back(43);
	d.push_back(41);
	printArray(d);

	sort(d.begin() , d.end());
	printArray(d);
	return 0;
}