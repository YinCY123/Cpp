#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <iterator>

// int main()
// {
//     constexpr size_t nrs = 3, ncs = 4;
//     int ia[nrs][ncs];
//     for(size_t i = 0; i != nrs; ++i){
//         for(size_t j = 0; j != ncs; ++j){
//             ia[i][j] = i * ncs + j;

//             // print the 2-D array
//             auto val = i * ncs + j;
//             if(val % 4 == 0 && val != 0){
//                 cout << endl;
//                 cout << val << " ";
//             }else{
//                 cout << val << " ";
//             }
//         }
//     }
//     cout << endl;
//     return 0;
// }

// int main()
// {
//     int ia[3][4];
//     auto cnt = 0;
//     for(auto &row : ia){
//         for(auto &col : row){
//             col = cnt;
//             ++cnt;
//         }
//     }
//     cout << endl;
//     return 0;
// }

// int main()
// {
//     int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
//     for (auto &row : arr){
//         for(auto &col : row){
//             if(col % 4 == 0){
//                 cout << col << "\t";
//                 cout << endl;
//             }else{
//                 cout << col << "\t";
//             }
//         }
//     }
//     cout << endl;
//     return 0;
// }


// int main()
// {
//     int ia[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
//     for(auto row = ia; row != ia + 3; ++row){
//         for(auto col = *row; col != *row + 4; ++col){
//             cout << *col << " ";
//         }
//     }
//     cout << endl;
//     return 0;
// }


int main()
{
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    for(auto p = std::begin(arr); p != std::end(arr); ++p){
        for(auto q = std::begin(*p); q != std::end(*p); ++q){
            if(*q % 4 == 0){
                cout << *q << "\t";
                cout << endl;
            }else{
                cout << *q << "\t";
            }
        }
    }
    cout << endl;
    return 0;
}
