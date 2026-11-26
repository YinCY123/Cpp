#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <vector>
using std::vector;


int Fibo(int n){
    int tmp = 0;
    if(n == 1){
        return 0;
    }else if(n == 2){
        return 1;
    }else if(n > 2){
        tmp = Fibo(n - 1) + Fibo(n - 2); 
    }

    return tmp;
}

int main()
{
    cout << "enter a number: ";
    int n;
    cin >> n;
    vector<int> arr;

    for(auto i = 0; i < n; ++i){
        arr.push_back(Fibo(i + 1));
    }

    cout << "Fibonacci Series up to " << n << " terms: " << endl;
    for(auto i : arr){
        cout << i << " ";
    }
    cout << endl;
}
