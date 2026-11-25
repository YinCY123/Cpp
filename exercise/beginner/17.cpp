#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <vector>
using std::vector;

int main()
{
    int total;
    cout << "enter a integer: ";
    cin >> total;

    int a = 0, b = 1;
    int c;
    vector<int> vec;

    if(total == 1){
        vec.push_back(a);
    }else if(total == 2){
        vec.push_back(a);
        vec.push_back(b);
    }else if(total > 2){
        vec.push_back(a);
        vec.push_back(b);
        for(auto i = 3; i <= total; ++i){
            c = a + b;
            vec.push_back(c);
            a = b; 
            b = c;
        }
    }else{
        cout << "The number if invalid." << endl;
    }
    
    for(auto i = 0; i < vec.size() - 1; ++i){
        cout << i << ", ";
    }
    cout << *(vec.end()-1) << endl;

    return 0;
}
