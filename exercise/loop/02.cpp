#include <iostream>
using std::cout;
using std::endl;


int main()
{
    int i = 1;
    cout << "Even numbers between 1 and 20 are: \n";
    while(i <= 20){
        if(i % 2 == 0){
            cout << i << (i <= 20 ? " " : "");
        }
        i++;
    }
    cout << endl;
    return 0;
}
