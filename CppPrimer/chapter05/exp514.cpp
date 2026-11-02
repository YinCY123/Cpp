#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

#include <vector>
using std::vector;

int main()
{
    string currentWord;
    string previousWord = "";
    string maxWord = "";

    int Cnt = 1;
    int maxCnt = 0;

    while(cin >> currentWord){
        if(currentWord == previousWord){
            ++Cnt;
        }else{
            if(Cnt > maxCnt){
                maxCnt = Cnt;
                maxWord = previousWord;
            }
            Cnt = 1;
        }
        previousWord = currentWord;
    }

    if(Cnt > 1 && Cnt > maxCnt){
        maxCnt = Cnt;
        maxWord = previousWord;
    }

    if(maxCnt > 0){
        cout << "The word " 
             << maxWord
             << " repeated "
             << maxCnt
             << " times concecutively."
             << endl;
    }else{
        cout << "There are no word repeat conscutively." << endl;
    }

    return 0;
}
