#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <vector>
using std::vector;


int main()
{
    vector<int> iv = {1,2,3,4,5,6};
    for(auto i : iv){
        cout << ((i % 2 == 0) ? i * 2 : i) << " ";
    }

    cout << endl;
    return 0;
}
