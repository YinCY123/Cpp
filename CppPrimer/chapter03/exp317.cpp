#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main()
{
    cout << "enter a sequence of string: ";
    string str;
    vector<string> vec;
    while(cin >> str){
        vec.push_back(str);
    }

    for(auto &s : vec){
        for(auto &ch : s){
            ch = toupper(ch);
        }
    }

    cout << "There are: "
         << vec.size() 
         << " elements in this vector."
         << endl;

    // eight words per line
    for (decltype(vec.size()) i = 0; i < vec.size(); ++i){
        if( (i + 1) % 9 == 0 ){
            cout << "\n"; 
        }
        cout << vec[i] << " ";
    }
    cout << endl;
    
    return 0;
}

