#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;

    int sum = 0;
    while(n % 10 > 0){
        sum += (n % 10);
        n = n / 10;
    }

    cout << "The sum of digit is: " << sum << endl;
    return 0;
}
