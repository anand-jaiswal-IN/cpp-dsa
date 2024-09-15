#include <iostream>
#include <queue>

using namespace std;

int main(int argc, char const *argv[])
{
	// max heap
	priority_queue<int> maxi;

	// min heap
	priority_queue<int, vector<int>, greater<int> > mini;

	maxi.push(1);
	maxi.push(2);
	maxi.push(3);
	maxi.push(4);

	int n = maxi.size();

	for(int i=0; i<n; i++) 
		{
			cout << maxi.top() << " ";
			maxi.pop();
		}

	cout << endl;
	
	mini.push(6);
	mini.push(4);
	mini.push(9);
	mini.push(5);

	int m = mini.size();

	for(int i=0; i<m; i++) 
		{
			cout << mini.top() << " ";
			mini.pop();
		}

	cout << endl;

	cout << "Is `maxi` Empty ?? " << maxi.empty() << endl;
	cout << "Is `mini` Empty ?? " << mini.empty() << endl;

	return 0;
}