#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
    int N;
    cout << "enter a number: ";
    cin >> N;

    for(auto i = 1; i <= 10; ++i){
        cout << N << " x " << i << " = " << N * i << endl;
    }

    return 0;
}
