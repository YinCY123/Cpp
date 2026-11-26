#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

// int main(){
//     int n;
//     cout << "enter a number: ";
//     cin >> n;

//     for(auto i = n; i > 0; --i){
//         string star(2 * i - 1, '*');
//         string str(4-i, ' ');
//         string p = str + star;
//         cout << p << endl;
//     }

//     return 0;
// }


int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;

    for(auto i = n; i > 0; --i){
        for(int j = n - i; j > 0; --j){
            cout << " ";
        }

        for(int k = 2 * i -1; k > 0; --k){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
