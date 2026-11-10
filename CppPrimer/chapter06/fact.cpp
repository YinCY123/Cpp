#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int fact(int val)
{
    int results = 1;
    while(val > 1){
        results *= val--;
    }
    return results;
}

int main()
{
    int n;
    cout << "enter an integer: ";
    cin >> n;
    int res = fact(n);
    cout << res << endl;
    return 0;
}
