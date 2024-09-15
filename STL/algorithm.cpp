#include <iostream>

#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v = {4,2,1,3,8};

    // Sorting the vector before using binary_search
    sort(v.begin(), v.end());

    for(int i : v) cout << i << " ";
    
    cout << endl;

    int findingElem = 3;
    bool isFindingElem = binary_search(v.begin(), v.end(), findingElem);
    cout << "Finding " << findingElem << " -> " << isFindingElem << endl;
    cout << "lower bound -> " << lower_bound(v.begin(), v.end(), findingElem)-v.begin() << endl;
    cout << "upper bound -> " << upper_bound(v.begin(), v.end(), findingElem)-v.begin() << endl;
    return 0;
}

