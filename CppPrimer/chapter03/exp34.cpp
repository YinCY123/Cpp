#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;


// int main()
// {
//     string s1;
//     string s2;

//     cout << "please tner two strings: ";
//     cin >> s1 >> s2;
//     if(s1 == s2){
//         cout << "The two strings are equal.";
//         return 0;
//     }else{
//         if(s1 > s2){
//             cout << s1
//                  << " string is larger."
//                  << endl;
//             return 0;
//         }else{
//             cout << s2 
//                  << " string is larger."
//                  << endl;
//             return 0;
//         }
//     }
// }


int main()
{
    string s1;
    string s2;

    cout << "please enter two strings: ";
    cin >> s1 >> s2;

    if(s1.size() == s2.size()){
        cout << "The two string are same length." << endl;
        return 0;
    }else if (s1.size() > s2.size()){
        cout << s1
             << " is longer than " 
             << s2
             << endl;
        return 0;
    }else if (s1.size() < s2.size()){
        cout << s2
             << " is longer than "
             << s1
             << endl;
        return 0;
    }
}
