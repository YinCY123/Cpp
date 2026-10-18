#include <iostream>
#include <vector>
#include <iterator>
#include <array>

using std::cout;
using std::endl;

int main()
{
    std::array<int, 3> arr1 = {1,2,3};
    std::array<int, 3> arr2 = {1,2,3};
    if(arr1 == arr2){
        cout << "The two arrays are equal." << endl;
    }

    vector<int> vec1 = {1, 2, 3};
    vector<int> vec2 = {1, 2, 3};
    if(vec1 == vec2){
        cout << "The two vectors are equal." << endl;
    }

    return 0;
}
