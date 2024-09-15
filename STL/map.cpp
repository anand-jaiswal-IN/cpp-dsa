#include <iostream>
#include <map>

using namespace std;

int main(int argc, char const *argv[])
{
    map<int, string> dict;
    dict.insert({1, "Book1"});
    dict.insert({1, "Book1"});
    dict.insert({1, "Book5"});
    dict.insert({4, "Book4"});

    dict[3] = "Book3";

    // printing the dict which is a map
    for(auto i : dict) {
        cout << i.first << " " << i.second << endl;
    }
    cout << endl;
    
    cout << "finding 3 ... yes/no -> " << dict.count(3) << endl;
    cout << "printing dict[2] : " << dict[1] << endl;

    //erasing dict[4]
    dict.erase(4);
    cout << endl;

    // printing after erase dict[4]
    /*
    cout << "printing after erase dict[4]" << endl;
    for(auto i : dict) {
        cout << i.first << " " << i.second << endl;
    }
    */

    auto f = dict.find(3);

    for(auto i = f; i != dict.end(); i++){
        cout << (*i).first << " " << (*i).second;
    }
    cout << endl;

    return 0;
}
