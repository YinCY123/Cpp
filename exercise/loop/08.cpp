#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;
    int remained;
    int reversed = 0;
    while(n % 10 > 0){
        remained = n % 10;
        reversed = (reversed * 10) + remained;
        n = n / 10;
    }

    cout << "reversed: " << reversed << endl;
    return 0;
}
