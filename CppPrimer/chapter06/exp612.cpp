#include <iostream>
using std::cout;
using std::cin;
using std::endl;


int swap(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
    
    return 0;
}

int main()
{
    cout << "please enter two integer: "; 
    int a, b;
    cin >> a >> b;

    cout << "before swap\n"
         << "a = "
         << a
         << "\nb = "
         << b
         << endl;

    swap(a, b);

    cout << "after swap\n"
         << "a = "
         << a
         << "\nb = "
         << b
         << endl;

    return 0;
}
