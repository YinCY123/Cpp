#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

#include <map>
using std::map;

int main()
{
    string str = "Programming in CPP";
    map<char,int> freq;
    for(auto i : str){
        if(isalpha(i)){
            ++freq[tolower(i)];
        }
    }
    
    cout << "String: " << str << endl;
    cout << "Character Frequencies: " << endl;
    for(const auto& i : freq){
        cout << "'" 
             << i.first 
             << "': "
             << i.second 
             << endl;
    }

    return 0;
}
