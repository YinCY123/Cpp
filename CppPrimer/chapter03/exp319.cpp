#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;


int main()
{
    vector<int> v1(10, 42);
    vector<int> v2{42,42,42,42,42,42,42,42,42,42};
    vector<int> v3={42,42,42,42,42,42,42,42,42,42};

    cout << v1.size() 
         << "\n"
         << v2.size() 
         << "\n"
         << v3.size() << endl;

    return 0;
}
