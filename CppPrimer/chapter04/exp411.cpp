#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    cout << "please enter 4 integer.";
    int a,b,c,d,tmp;
    cin >> a >> b >> c >> d;

    if(c - d < 0){
        tmp = c;
        c = d;
        d = tmp;
    }
    if(b - c < 0){
        tmp = b;
        b = c;
        c = tmp;
    }
    if(a - b < 0){
        tmp = a;
        a = b;
        b = tmp;
    }

    cout << "a = "
         << a
         << "\n"
         << "b = "
         << b
         << "\n"
         << "c = "
         << c
         << "\n"
         << "d = "
         << d
         << "\n"
         << endl;

    return 0;
}
