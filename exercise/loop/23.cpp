#include <iostream>
using std::cout;
using std::cin;
using std::endl;


int main()
{
    cout << "enter a number: ";
    int N;
    cin >> N;

    for(auto i = N; i > 0; --i){
        for(auto j = i; j > 0; --j){
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
