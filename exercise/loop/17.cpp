#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int sum = 0;

    // for(auto i = 0; i != std::size(arr); ++i){
    //     sum += arr[i];
    // }

    for(auto i : arr){
        sum += i;
    }

    cout << "The sum of all elements in the array is: " << sum << endl;

    return 0;
}
