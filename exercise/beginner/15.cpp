#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
    unsigned sum = 0;
    int n;
    cout << "enter a integere number: ";
    cin >> n;
    while(n > 0){
        sum += n;
        --n;
    }

    cout << "The sum of natural numbers up to " 
         << n 
         << " is: " 
         << sum 
         << endl;
    return 0;
}
