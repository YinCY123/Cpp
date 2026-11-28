#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    cout << "Height (N) for the repeating number pattern: ";
    int n;
    cin >> n;

    for(auto i = 1; i <= n; ++i){
        for(auto j = 1; j <= i; ++j){
            cout << i << (j == i ? "" : " ");
        }
        cout << endl;
    }

    return 0;
}
