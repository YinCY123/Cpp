#include <iostream>
#include <string>
#include <vector>

using std::vector;
using std::endl;
using std::cout;

int main()
{
    vector<int> vec{0,1,2,3,4,5,6,7,8,9};
    for(auto it = vec.begin(); it != vec.end(); ++it){
        *it = *it * 2;
    }

    for(auto it = vec.cbegin(); it != vec.cend();++it){
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
