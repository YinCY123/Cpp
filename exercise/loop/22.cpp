#include <iostream>
using std::cout;
using std::cin;
using std::endl;


int main()
{
    cout << "Enter the height (N) for the triangle: ";
    int N;
    cin >> N;

    for(auto i = 1; i <= N; ++i){
        for(auto j = 1; j <= i; ++j){
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
