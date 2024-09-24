#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int nums[5];
	nums[0] = 12;
	nums[1] = 18;
	nums[2] = 20;
	nums[3] = 22;
	nums[4] = 82;

	cout << "printing values of nums : ";
	for(int i = 0; i < 5; i++){
		cout << nums[i] << " ";
	}
	cout << endl;

	cout << "nums = " << nums << endl;
	cout << "&nums = " << &nums << endl;

	cout << "nums[0] = " << nums[0] << endl;
	cout << "*nums = " << *nums << endl;

	cout << "*nums + 1 = " << *nums + 1 << endl;
	cout << "*(nums + 1) = " << *(nums + 1) << endl;

	cout << "nums + 1 = " << nums + 1 << endl;	
	cout << "&nums[1] = " << &nums[1] << endl;

	return 0;
}

/*
arr[i] = *(arr + i)
i[arr] = *(i + arr)
*/