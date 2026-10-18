#include <iostream>
#include <vector>
#include <iterator>

using std::vector;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    int *ptr = std::begin(arr);
    int *e = std::end(arr);
    while(ptr != e){
        *ptr = 0;
        ++ptr;
    }

    for(auto i : arr){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
