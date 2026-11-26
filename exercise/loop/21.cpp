#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for(auto i = 1; i <= n; ++i){
        for(auto j = 1; j <= n; ++j){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
