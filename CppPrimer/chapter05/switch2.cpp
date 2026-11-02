#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    unsigned int cnt = 0;
    unsigned int other = 0;
    char ch;
    cout << "enter a string of characters: ";
    while(cin >> ch){
        switch(ch){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                ++cnt;
                break;
            default:
                ++other;
                break;
        }
    }
    cout << "total number of vewol:\t" 
         << cnt
         << "\ntotal number of non-vewol:\t"
         << other 
         << endl;

    return 0;
}
