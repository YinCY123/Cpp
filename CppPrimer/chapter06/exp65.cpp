#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "chapter06.hpp"

int abs(int val){
    if(val >= 0){
        return val;
    }else{
        return -val;
    }
}

int main(){
    cout << "Please enter a integer: ";
    int n;
    cin >> n;
    int result = abs(n);

    cout << result << endl;
    return 0;
}
