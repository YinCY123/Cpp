#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <vector>
using std::vector;

int main()
{
    int n =100;
    vector<int> arr;

    cout << "Prime numbers betwwen 1 and 100 are: ";
    for(int i = 1; i <= n; ++i){
        bool flag = true;
        for(int j = i - 1; j > 1; --j){
            if(i % j == 0){
                flag = false;
                break;
            }
        }
        if(flag){
            cout << i << (i == n ? "" : " ");
        }
    }
    cout << endl;
    return 0;
}
