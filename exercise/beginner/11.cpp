#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
    int year = 1900;
    bool flag = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
    if(flag){
        cout << year << " is a Leep year." << endl; 
    }

    return 0;
}
