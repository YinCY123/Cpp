#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
    long long sum = 1;
    int N;
    cout << "enter a integer: ";
    cin >> N;
    for(auto i = 1; i <= N; ++i){
        sum *= i;
    }

    cout << N << "! (Factorial of " << N << ") is: " 
         << sum 
         << endl;

    return 0;
}
