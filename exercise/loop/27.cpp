#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int n;
    cout << "Height (N) for the number pattern: ";
    cin >> n;
    for(auto i = 1; i <= n; ++i){
        for(auto j = 1; j <= i; ++j){
            cout << j << (j == i ? "" : " ");
        }
        cout << endl;
    }

    return 0;
}
