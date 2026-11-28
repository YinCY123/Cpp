#include <iostream>
using std::cout;
using std::cin;
using std::endl;


int main()
{
    cout << "Height (N) for the inverted decreasing number pattern: ";
    int n;
    cin >> n;

    for(auto i = 1; i <= n; ++i){
        for(auto j = n; j > n - i; --j){
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
