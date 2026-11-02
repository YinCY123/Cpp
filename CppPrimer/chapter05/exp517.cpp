#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <vector>
using std::vector;

int main()
{
    vector<int> a = {0,1,1,2};
    vector<int> b = {0,1,1,2,3,5,8};

    if(a.size() >= b.size()){
        vector<int> suba(a.begin(), a.begin() + b.size());
        if(suba == b){
            cout << "b is a prefix of b" << endl;
        }else{
            cout << "b is not a prefix of b" << endl;
        }
    }else{
        vector<int> subb(b.begin(), b.begin() + a.size());
        if(subb == a){
            cout << "a is a prefix of b" << endl;
        }else{
            cout << "a is not a prefix of b" << endl;
        }
    }
    return 0;
}
