// https://www.spoj.com/problems/EKO/

#include <iostream>
#include <vector>

using namespace std;

bool isPossibleAnswer(vector<int> trees, int requiredTrees, int answerableValue){
	int sum = 0;
	for (int i = 0; i < trees.size(); ++i)
		if(trees[i] > answerableValue)
			sum += trees[i] - answerableValue;

	return sum >= requiredTrees;
}

int maximumSawbladeHeight(vector<int> trees, int requiredTrees){
	// applying binary search algorithm
	int s = 0, e = trees[0], ans = -1;

	// for `e` to be atmost height in trees.
	for (int i = 0; i < trees.size(); ++i) {
		if(trees[i] > e) e = trees[i];
	}

	while(s<=e){
		int m = s + (e-s)/2;
		if(isPossibleAnswer(trees, requiredTrees, m)){
			ans = m;
			s = ++m;
		}else e = --m;
	}
	return ans;
}

int main(int argc, char const *argv[])
{
	int n, requiredTrees;
    cin >> n >> requiredTrees;

    vector<int> trees(n);

    for (int i = 0; i < n; i++) {
        cin >> trees[i];
    }

	int result = maximumSawbladeHeight(trees, requiredTrees);
	cout << result << endl;
	return 0;
}