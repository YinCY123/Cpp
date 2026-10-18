#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <vector>
using std::vector;

#include <iterator>
using std::begin;
using std::end;


int main()
{
    int arr[] = {1,2,3,4,5,6};
    vector<int> vec(begin(arr), end(arr));

    for(auto i : vec){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
