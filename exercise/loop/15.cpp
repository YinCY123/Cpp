#include <iostream>
using std::cout;
using std::cin;
using std::endl;


int main()
{
    cout << "enter two numbers: ";
    int a, b;
    cin >> a >> b;

    int lcm = a;
    if(lcm < b){
        lcm = b;
    }
    
    bool flag = true;
    while(flag){
        if((lcm % a == 0) && (lcm % b == 0)){
            cout << "LCM = " << lcm << endl;
            flag = false;
        }
        ++lcm;
    }
    return 0;
}
