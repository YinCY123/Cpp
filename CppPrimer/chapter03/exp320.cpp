#include <iostream>
#include <vector>


using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
    cout << "enter a sequence of integer: ";
    vector<int> vec;
    int i;
    while(cin >> i){
        vec.push_back(i);
    }

    cout << "\n==================================";
    cout << "\nprint the content of the vector.";
    cout << "\n==================================\n";

    for(decltype(vec.size()) i = 0; i < vec.size(); ++i){
        cout << vec[i] << endl;
    }

    cout << "\nPrint the sum of the pair.\n";
    cout << "=============================\n";
    for(decltype(vec.size()) i = 0; i < (vec.size() / 2) + 1; ++i){
        cout << "i is: " << i << endl;
        cout << vec[i] + vec[vec.size() -i - 1] << endl;
    }

    return 0;
}
