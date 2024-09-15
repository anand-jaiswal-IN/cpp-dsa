// https://www.naukri.com/code360/problems/find-unique_625159?interviewProblemRedirection=true&search=unique&practice_topic%5B%5D=Arrays&leftPanelTabValue=PROBLEM

#include <iostream>
using namespace std;

int findUnique(int arr[], int size)
{
	// We know about XOR operator. As XOR of a number with same number result 0.
	// And XOR of a number with 0 result that number. 

	int r = 0;

	for (int i = 0; i < size; i++)
	{
		r^=arr[i];
	}
	return r;
}

int main(int argc, char const *argv[])
{
	int arr[5] = {1,3,2,1,2};
	

	int r = findUnique(arr, 5);
	cout << r << endl;

	return 0;
}