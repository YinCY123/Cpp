#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

int main()
{
    cout << "Enter a sentence: ";
    string str;
    getline(cin, str);

    int len = str.length();
    string reversed_str;
    
    for(auto e = str.end() - 1; e != str.begin() - 1; --e){
        reversed_str += *e;
    }    

    cout << reversed_str << endl;

    return 0;
}
