#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <vector>
using std::vector;

int main()
{
    int a = 10, b = 40, c = 300;
    int max = a;
    vector<int> vec = {a, b, c};
    for(auto i : vec){
        if(i > max){
            max = i;
        }
    }
    cout << max << " is the largest number." << endl;

    return 0;
}
