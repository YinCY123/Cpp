#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int div;
    int a, b;
    cout << "enter two numbers: ";
    cin >> a >> b;
    div = a;

    if(div < b){
        div = b;
    }

    while(div > 0){
        if((a % div == 0) && (b % div == 0)){
            cout << "The GCD (HCF) of " 
                 << a 
                 << " and " 
                 << b 
                 << " is: " 
                 << div
                 << endl;
            break;
        }
        --div;
    }
    return 0;
}
