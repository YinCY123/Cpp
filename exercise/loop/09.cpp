#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;
    int tmp = n;
    int reversed = 0;
    while(tmp % 10 > 0){
        int remained = tmp % 10;
        reversed = (reversed * 10) + remained;
        tmp = tmp / 10;
    }

    // cout << "reversed: " << reversed << endl;
    if(n == reversed){
        cout << n << " is a palindrome number." << endl;
    }else{
        cout << n << " is not a palindrome number." << endl;
    }

    return 0;

}
