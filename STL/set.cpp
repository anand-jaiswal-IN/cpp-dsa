#include <iostream>
#include <set>
using namespace std;


int main(int argc, char const *argv[])
{
	set<int> s;

	s.insert(0);
	s.insert(5);
	s.insert(2);
	s.insert(6);
	s.insert(3);
	s.insert(2);
	s.insert(2);
	s.insert(2);

	// return in a sorted and unique elements
	for(auto i : s){
		cout << i << " ";
	}
	cout << endl;

	cout << "Begin : " << *s.begin() << endl;
	cout << "End : " << *s.end() << endl;

	int finding_element = 6;
	set<int>::iterator itr = s.find(finding_element);
	cout << *itr << endl;

	return 0;
}