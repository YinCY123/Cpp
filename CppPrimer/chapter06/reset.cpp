#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void reset(int &val)
{
    val = 0;
}

int main()
{
    cout << "enter a integer: ";

    int n;
    cin >> n;

    cout << "before reset, n = " << n << endl;

    reset(n);

    cout << "after reset, n = " << n << endl;

    return 0;
}
