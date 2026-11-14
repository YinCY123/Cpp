#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;


inline bool isShorter(const string& str1, const string& str2)
{
    return str1.size() < str2.size();
}

int main()
{
    cout << "enter two strings: "; 
    string s1;
    string s2;
    cin >> s1 >> s2;

    bool result = isShorter(s1, s2);
    cout << std::boolalpha << result << endl;

    return 0;
}
