#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

int main()
{
    string str = "PYnative";
    
    int cnt = 0;
    int n = 0;
    for(char a : str){
        switch(a){
            case 'A': case 'a':
            case 'E': case 'e':
            case 'I': case 'i':
            case 'O': case 'o':
            case 'U': case 'u':
                ++cnt;
                break;
            default:
                ++n;
                break;
        }
    }
    cout << "Vowel Count: " << cnt << endl;
    cout << "Consonant Count: " << n << endl;

    return 0;
}
