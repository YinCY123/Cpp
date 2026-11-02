#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// calculate both lower and upper case vewol letters
int main()
{
    unsigned int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, space = 0;
    unsigned int ffCnt = 0, flCnt = 0, fiCnt = 0;
    char ch;
    char preCh = '\0'; // trace the immediate preceding character
    cout << "Enter a character string: ";
    while(cin.get(ch)){
        switch(ch){
            case 'a':
            case 'A':
                ++aCnt;
                break;
            case 'e':
            case 'E':
                ++eCnt;
                break;
            case 'i':
            case 'I':
                if(preCh == 'f'){
                    ++fiCnt;
                }
                ++iCnt;
                break;
            case 'o':
            case 'O':
                ++oCnt;
                break;
            case 'u':
            case 'U':
                ++uCnt;
                break;
            case '\t':
            case ' ':
            case '\n':
                ++space;
                break;
            case 'f':
                if(preCh == 'f'){
                    ++ffCnt;
                }
                break;
            case 'l':
                if(preCh == 'f'){
                    ++flCnt;
                }
                break;
        }
        preCh = ch;
    }

    cout << "Number of vowel a(A):\t" << aCnt
         << '\n'
         << "Number of vowel e(E):\t" << eCnt
         << '\n'
         << "Number of vowel i(I):\t" << iCnt
         << '\n'
         << "Number of vowel o(O):\t" << oCnt
         << '\n'
         << "Number of vowel u(U):\t" << uCnt
         << '\n'
         << "Number of space:\t" << space
         << '\n'
         << "Number of ff:\t" << ffCnt
         << '\n'
         << "Number of fl:\t" << flCnt
         << '\n'
         << "Number of fi:\t" << fiCnt
         << endl;

    return 0;
}
