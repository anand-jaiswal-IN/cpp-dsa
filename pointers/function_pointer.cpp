#include <iostream>
using namespace std;

void update(int *ptr){
	ptr = ptr + 1;
	cout << "Value of `ptr_a` inside update : " << ptr << endl;
}

void update_value_of_pointer(int *ptr){
	++(*ptr);
}

int getSum(int *arr, int n){
	cout << "size of arr : " << sizeof(arr) << endl;
	int s = 0;
	for(int i = 0; i < n; i++)
		s+=arr[i];
	// cout << "sum : " << s << endl;
	return s;
}

int main(int argc, char const *argv[])
{
	int a = 6;
	int *ptr_a = &a;

	cout << "Value of `ptr_a` before update : " << ptr_a << endl;
	update(ptr_a);
	cout << "Value of `ptr_a` after update : " << ptr_a << endl;

	cout << endl << endl;

	cout << "Value of `*ptr_a` before update : " << *ptr_a << endl;
	update_value_of_pointer(ptr_a);
	cout << "Value of `*ptr_a` after update : " << *ptr_a << endl;

	cout << endl << endl;

	int arr[5] = {6,5,9,3,7};
	int sum = getSum(arr, 5);
	cout << "Sum of array `arr` : " << sum << endl;

	int sum_of_last_3_digits = getSum(arr+3, 2);
	cout << "Sum of last 3 digits : " << sum_of_last_3_digits << endl;

	return 0;
}