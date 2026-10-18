#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
    int arr1[10];
    // int arr2[10];
    vector<int> vec(10);

    for(auto i = 0; i != std::size(arr1); ++i){
        arr1[i] = i;
    }

    // for(auto j = 0; j != std::size(arr1); ++j){
    //     arr2[j] = arr1[j];
    // }

    for(auto j = 0; j < vec.size(); ++j){
        vec[j] = j;
    }

    for(auto j = 0; j < vec.size(); ++j){
        cout << j << " ";
    }

    cout << endl;
    return 0;
}
