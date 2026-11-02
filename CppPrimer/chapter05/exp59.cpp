#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    unsigned int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    cout << "enter a string: ";
    char ch;
    while(cin >> ch){
        if(ch == 'a') ++aCnt;
        if(ch == 'e') ++eCnt;
        if(ch == 'i') ++iCnt;
        if(ch == 'o') ++oCnt;
        if(ch == 'u') ++uCnt;
    }

    cout << "a = " << aCnt << '\n'
         << "e = " << eCnt << '\n'
         << "i = " << iCnt << '\n'
         << "o = " << oCnt << '\n'
         << "u = " << uCnt << '\n'
         << endl;

    return 0;
}
