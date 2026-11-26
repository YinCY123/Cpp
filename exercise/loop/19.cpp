#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    cout << "Please enter a number: ";
    int a;
    cin >> a;
    int tmp = a - 1;
    bool flag = false;

    while(tmp > 1){
        if(a % tmp == 0){
            flag = true;
            break;
        }
        --tmp;
    }

    if(flag){
        cout << a <<  " is not a prime number." << endl;
    }else{
        cout << a << " is a prime number." << endl;
    }
    return 0;
}
