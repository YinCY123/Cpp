#include <string>
#include <iostream>
#include <cctype>
using std::string;
using std::cin;
using std::cout;
using std::endl;

string aa(15, '=');

int main()
{
    std::cout << aa
              << " The string type of Cpp "
              << aa
              << std::endl;

    //==================
    // read unknow number of strings
    //==================

    // string word;
    // cout << "Enter strings: ";

    // while (cin >> word){
    //     cout << word << endl;
    // }
    // return 0;

    // ==================
    // read entire line with getline
    // ==================

    // string line;
    // cout << "please enter a line: ";
    // while (getline(cin, line)){
    //     if(line.size() > 20){
    //         cout << line << endl;
    //     }
    // }

    // ==================
    // add two strings
    // ==================

    // string s1 = "hello, ";
    // string s2 = "world\n";
    // string s3 = s1 + s2;
    // s1 += s2;

    // cout << s1
    //      << s2
    //      << s3
    //      << endl;

    // =====================
    // print the number of punctions
    // =====================

    // string str("Hello, World!!!");
    // decltype(str.size()) punct_cnt = 0;

    // for(auto c : str ){
    //     if(ispunct(c)){
    //         ++punct_cnt;
    //     }
    // }
    // cout << punct_cnt
    //      << " punctutation characters in: "
    //      << str
    //      << endl;

    // =====================
    // use subscript for iteration
    // =====================

    // string str("some string");

    // for(decltype(str.size()) index = 0; index != str.size() && !isspace(str[index]); ++index){
    //     str[index] = toupper(str[index]);
    // }

    // cout << str << endl;

    // =====================
    // using a subscript for random access
    // =====================

    const string hexdigits = "0123456789ABCDEF";
    cout << "Enter a series of numbers between 0 and 15"
         << " separated by spaces. Hit ENTER when finished: "
         << endl;
    string result;
    string::size_type n;
    while (cin >> n){
        if(n == -1){
            cout << "quit" << endl;
            break;
        }
        if(n < hexdigits.size()){
            result += hexdigits[n];
        }
    }
    cout << "Your hex number is: "
         << result
         << endl;

    return 0;
}
