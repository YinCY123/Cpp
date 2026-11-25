#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
    cout << "Enter a number: ";
    int N;
    int reversed = 0;
    cin >> N;
    while(N > 0){
	int digit = N % 10; // get the last number
	reversed = (reversed * 10) + digit;
	N = N/10;
    }    
    cout << "reversed: " << reversed << endl;
    return 0;
}
