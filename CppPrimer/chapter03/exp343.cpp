#include <iostream>
using std::cout;
using std::cin;
using std::endl;

//==================
//range for
//==================

// int main()
// {
//     int ia[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
//     for(auto &row : ia){
//         for(auto col : row){
//             cout << col << " ";
//         }
//     }
//     cout << endl;
// }

//====================
// pointer
//====================

// int main()
// {
//     int ia[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
//     for(auto *p = ia; p != ia + 3; ++p){
//         for(int *q = *p; q != *p + 4; ++q){
//             cout << *q << " ";
//         }
//     }
//     cout << endl;
//     return 0;
// }

//====================
// subscript
//====================

int main()
{
    int ia[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    size_t nr = 3;
    size_t nc = 4;
    for(size_t i = 0; i != nr; ++i){
        for(size_t j = 0; j != nc; ++j){
            cout << ia[i][j] << " ";
        }
    }
    cout << endl;
    return 0;
}
