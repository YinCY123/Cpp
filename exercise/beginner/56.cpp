#include <iostream>
using std::cout;
using std::endl;

#include <fstream>
using std::ifstream;

#include <string>
using std::string;

#include <map>
using std::map;

int main()
{
    string line;
    ifstream file("mydata.txt");

    map<char, int> cnt;
    while(file){
        getline(file, line);
        for(auto c : line){
            if(isalpha(c)){
                ++cnt[tolower(c)];
            }
        }
    }
    file.close();

    for(auto i : cnt){
        cout << "The character " << i.first
             << " appears: " << i.second
             << endl;
    }
    return 0;
}
