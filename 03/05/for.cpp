#include <iostream>
using namespace std;

int main(){
    int sum = 0;
    for(int i = 0; i < 10; i++){
        sum += i;
        cout << "i = " << i << ", sum = " << sum << endl;
    }
    // cout << "sum = " << sum << endl;
}