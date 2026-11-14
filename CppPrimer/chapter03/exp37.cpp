#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <vector>
using std::vector;

#include <string>
using std::string;

#include <cctype>

int main()
{

    vector<string> svec;
    string input;

    cout << "please enter some words: ";
    while(cin >> input){
        svec.push_back(input);
    }

    for(string& word : svec){
        for(char& i : word){
            i = std::toupper(static_cast<unsigned char>(i));
        }
    }

    for(auto i = 0; i != svec.size(); ++i){
        if(i == 0){
            cout << svec[0] << " ";
        }else if(i % 8 == 0){
            cout << endl;
            cout << svec[i] << " ";
        }else{
            cout << svec[i] << " ";
        }
    }
    cout << endl;

    return 0;
}
