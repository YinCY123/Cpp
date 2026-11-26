#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
    int N;
    double sum = 0;
    cout << "enter a integer: ";
    cin >> N;
    for(auto i = 1; i <= N; ++i){
        sum += i;
    }

    cout << "The sum of the first " 
         << N 
         << " nature numbers is: " 
         << sum 
         << endl;
    return 0;
}
