#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include<string>
using std::string;


bool strCompare(const string &s1, const string &s2)
{
    bool results = s1 == s2;
    return results;
}

int main()
{
    cout << "enter two strings to compare: ";
    string s1, s2;
    cin >> s1 >> s2;

    bool result;
    result = strCompare(s1, s2);

    string res;
    if(result == true){
        res = "equal";
    }else{
        res = "not equal";
    }

    cout << "string " 
         << s1
         << " is "
         << res
         << " to string "
         << s2
         << endl;

    return 0;
}
