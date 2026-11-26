#include <iostream>
using std::cout;
using std::endl;
using std::cin;

double even(int n){
    double sum = 0;
    for(auto i = 1; i <= n; ++i){
        if (i % 2 == 0){
            sum += i;
        }
    }

    return sum;
}

double odd(int n){
    double sum = 0;
    for(auto i = 1; i <= n; ++i){
        if(i % 2 != 0){
            sum += i;
        }
    }
    return sum;
}


int main()
{
    cout << "enter an integer: ";
    int n;
    cin >> n;

    cout << "Sum of even numbers: " << even(n) << endl;
    cout << "Sum of odd numbers: " << odd(n) << endl;

    return 0;
}
