#include <iostream>

using std::cout;
using std::cin;
using std::endl;


int main()
{
    int arr[10];
    for(auto i = 0; i != std::size(arr); ++i){
        arr[i] = i;
    }

    for(auto j : arr){
        cout << j << " ";
    }
    cout << endl;
    return 0;
}
