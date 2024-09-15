// https://www.naukri.com/code360/problems/cooking-ninjas_1164174?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPossibleAnswer(vector<int> &rank, int noOfDishes, int mid)
{
    // sbse pehle hm first rank wale ( rank[i] ) ko kaam dengey. If time > mid then shift to next rank wala aadmi

    int totalDishes = 0;

    for (int i = 0; i < rank.size(); ++i)
    {
        int time = 0; // time taken by r'th cook to cook `dishesComp`.
        int k = 1; // k'th dish
        int dishesComp = 0;

        while(time + k * rank[i] <= mid)
        {
            time += k * rank[i];
            dishesComp ++;
            k++;
        }
        totalDishes += dishesComp;
        
        if(totalDishes >= noOfDishes) return true;
    }
    return totalDishes >= noOfDishes;

}

int minCookTime(vector<int> &rank, int noOfDishes)
{
    int s = rank[0],
    ans = -1,
    maxRank = rank[0];

    // To find maximum and minimum in rank

    for(int i = 0; i < rank.size(); i++){
    	if (rank[i] < s) s = rank[i];
    	if( rank[i] > maxRank) maxRank = rank[i];
    }

    int e = maxRank * (noOfDishes * (noOfDishes + 1))/2;

    // s = least time to complete noOfDishes
    // e = maximum time to complete noOfDishes

    // applying binary search algorithm

    while(s<=e){
        int m = s + (e-s)/2;
        if(isPossibleAnswer(rank, noOfDishes, m)){
            ans = m;
            e = m - 1;
        } else s = m + 1;
    }
    return ans;
}

int main(int argc, char const *argv[])
{
	vector<int> rank = {1,1};
	int noOfDishes = 11;
	int result = minCookTime(rank, noOfDishes);
	cout << result << endl;
	return 0;
}