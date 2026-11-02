#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

int main()
{
    string rsp;
    string str1, str2;
    do{
        cout << "please enter two strings: ";
        cin >> str1 >> str2;
        if(str1 >= str2){
            cout << str1
                 << " is greater than or equal to "
                 << str2
                 << endl;
        }else{
            cout << str1
                 << " is less than "
                 << str2
                 << endl;
        }
        cout << "Continue? Enter y or n: ";
        cin >> rsp;
    }while(!rsp.empty() && rsp[0] != 'n');

    return 0;
}
