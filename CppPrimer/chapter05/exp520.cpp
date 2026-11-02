#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    char currentWord;
    char previousWord = '\0';
    char maxchar;
    int n = 1;
    int maxCh = 1;

    cout << "Please enter a string of characters: ";

    while(cin >> currentWord){
        if(currentWord == previousWord){
            ++n;
            
            if(n > maxCh){
                maxCh = n;
                maxchar = currentWord;
            }
        }else{
            n = 1;
        }
        previousWord = currentWord;
    }

    if(maxCh >= 2){
        cout << "There are consecutive characters in the string "
             << "( "
             << maxchar
             << " ): "
             << maxCh
             << " times."
             << endl;
    }else{
        cout << "There are no consecutive characters in the string."
             << endl;
    }
    return 0;
}
