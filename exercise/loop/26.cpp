#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <iomanip>


int main()
{
    int n = 10;
    cout << "\t\t--- 1 to 10 Multiplication Chart ---" << endl;
    for(auto i  = 1; i <= 10; ++i){
        for(auto j  = 1; j <= 10; ++j){
            cout << std::setw(4) << i * j << (j == 10 ? "" : "\t");
        }
        cout << endl;
    }

    return 0;
}
