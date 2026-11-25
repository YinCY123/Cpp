#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int N;
    cout << "enter a number: ";
    cin >> N;

    bool flag = true;
    for(auto i = 2; i != N; ++i){
        if(N % i == 0){
            flag = false;
            break;
        }
    }

    if(flag){
        cout << N << " is a primer number." << endl;
    }else{
        cout << N << " is not a primer number." << endl;
    }

    return 0;
}
