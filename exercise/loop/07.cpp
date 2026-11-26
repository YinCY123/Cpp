#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int N;
    cout << "Enter a integer: ";
    cin >> N;

    int nd = 0;
    while(N % 10 > 0){
        ++nd;
        N = N/10;
    }

    cout << nd << endl;
    return 0;
}
