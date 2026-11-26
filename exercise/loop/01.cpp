#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int i = 1;
    int N = 10;
    cout << "Number from 1 to 10 are: ";

    while(i <= 10){
        cout << i << (i <= 10 ? " " : "");
        ++i;
    }
    cout << endl;
    return 0;
}
