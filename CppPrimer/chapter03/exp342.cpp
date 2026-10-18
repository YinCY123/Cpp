#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <vector>
using std::vector;


int main()
{
    vector<int> vec(5,1);
    int arr[5];
    // decltype(vec.size()) size = vec.size();
    decltype(std::size(arr)) size = std::size(arr);
    for(auto i = 0; i < size; ++i){
        arr[i] = vec[i];
    }

    for(auto j : arr){
        cout << j << " ";
    }

    for(auto k : vec){
        cout << k << ' ';
    }

    cout << endl;

    return 0;
}
