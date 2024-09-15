// vector (dynamic) array

#include <iostream>
#include <vector>

using namespace std;

void printArray(vector<int> arr)
{
	for (int i : arr){
		cout << i << " ";
	}
	cout << endl;
}

int main(int argc, char const *argv[])
{
	vector<int> dynArr;
	cout << "Capacity : " << dynArr.capacity() << endl;

	dynArr.push_back(12);
	cout << "Capacity : " << dynArr.capacity() << endl;

	dynArr.push_back(45);
	cout << "Capacity : " << dynArr.capacity() << endl;

	dynArr.push_back(56);
	cout << "Capacity : " << dynArr.capacity() << endl;
	cout << "Size : " << dynArr.size() << endl;

	cout << "First element : " << dynArr.front() << endl;
	cout << "Last element : " << dynArr.back() << endl;

	dynArr.pop_back();

	printArray(dynArr);

	return 0;
}