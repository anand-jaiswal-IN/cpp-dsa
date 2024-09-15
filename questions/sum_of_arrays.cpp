#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

vector<int> findArraySum(vector<int>&nums1, int n, vector<int>&nums2, int m) {
	int a = 0;
	for(int i = 0; i < n; i++){
		a += nums1[i] * pow(10, (n-1-i));
	}

	int b = 0;
	for(int i = 0; i < m; i++){
		b += nums2[i] * pow(10, (m-1-i));
	}

	int r = a+b;

	int t = r;
	int noOfDigits = 0;

	while(t>0){
		noOfDigits++;
		t /= 10;
	}

	vector<int> result(noOfDigits);
	int i = 0;

	while(r>0){
		result[result.size()-1-i] = r%10;
		i++;
		r /= 10;
	}

	return result;
}

int main(int argc, char const *argv[])
{
	vector<int> nums1 = {4,5,1};
	vector<int> nums2 = {3,4,5};
	vector<int> result = findArraySum(nums1, 3, nums2, 3);

	for (int i = 0; i < result.size(); ++i)
	{
		cout << result[i] << " ";
	}
	cout << endl;

	return 0;
}