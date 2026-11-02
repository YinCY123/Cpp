#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    cout << "Enter some integers: ";
    int val;
    while(cin >> val){
        if(val == 42){
            cout << "Program terminated.";
            break;
        }else{
            cout << val << " ";
        }
    }
    cout << endl;
    return 0;
}
