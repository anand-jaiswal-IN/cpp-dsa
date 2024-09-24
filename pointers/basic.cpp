#include <iostream>
using namespace std;

void increaseBy(int num, int n) {
	num+=n;
	cout << endl << "------ Inside increaseBy function ----- " << endl;
	cout << "num = " << num << endl;
	cout << "------ Exited increaseBy function ----- " << endl << endl;
}

void increaseBy_pass_by_reference(int &num, int n){
	num+=n;
	cout << endl << "------ Inside increaseBy_pass_by_reference function ----- " << endl;
	cout << "num = " << num << endl;
	cout << "------ Exited increaseBy_pass_by_reference function ----- " << endl << endl;
}

int main(int argc, char const *argv[])
{
	int num = 5;
	num++;
	cout << "num = " << num << endl;
	
	// printing the address of `5`
	cout << "Address of number : " << &num << endl;
	int *ptr_num = &num;
	cout << "ptr_num = " << ptr_num << endl;
	cout << "*ptr_num = " << *ptr_num << endl;

	cout << "size of `num` : " << sizeof(num) << " bytes" << endl;
	cout << "size of `ptr_num` : " << sizeof(ptr_num) << " bytes" << endl;

	increaseBy(num,3);
	cout << "*ptr_num = " << *ptr_num << endl;

	increaseBy_pass_by_reference(num,3);
	cout << "*ptr_num = " << *ptr_num << endl;

	return 0;
}