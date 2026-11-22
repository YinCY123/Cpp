#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <vector>
using std::vector;

#include <algorithm>

int main()
{
    vector<string> str = {"flower", "flow", "flight"};
    string common = "";

    vector<int> len;
    for(auto i = 0; i != str.size(); ++i){
        len.push_back(str[i].size());
    }

    int min_len = *(min_element(len.begin(), len.end()));
    // cout << min_len << endl;
    
    while(min_len > 0){

        // subset string
        vector<string> sstr;
        for(auto i = 0; i != str.size(); ++i){
            sstr.push_back(str[i].substr(0, min_len));
        }

        // comparision
        // bool all_match = std::all_of(sstr.begin(), sstr.end(), [&](const string& s){return s == sstr[0]});
        bool all_match = std::all_of(sstr.begin() + 1, sstr.end(), [&](const string& s) {
            return s == sstr[0];
        });
        if( all_match ){
            common = sstr[0];
            break;
        }
        --min_len;
    }
    cout << "longest common Prefix: " << common << endl;
    return 0;
}
