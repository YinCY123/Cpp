#include <iostream>
using namespace std;

int main(){
    int num = 10;
    
    while (num > 0){
        num--;
        if (num == 5){
            cout << "skipping 5" << endl;
            continue; // Skip the rest of the loop when num is 5
        }
        cout << "num = " << num << endl;
    }
}