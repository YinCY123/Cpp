#include <iostream>

// int main()
// {
//     int fab[8];
//     fab[0] = 0;
//     fab[1] = 1;

//     int N {8};
//     int i {2};
//     while(i < N){
//         fab[i] = fab[i-1] + fab[i-2];
//         i++;
//     }

//     std::cout << "Fibonacci Series: ";
//     for(int i = 0; i < N; ++i){
//         if(i == N - 1){
//             std::cout << fab[i]; 
//         }else{
//             std::cout << fab[i] << ", "; 
//         }
//     }
//     std::cout << '\n';
//     return 0;
// }

int main()
{
    int N {8};
    long long a {0};
    long long b {1};
    long long nextTerm;

    std::cout << "Fibonacci Series: ";

    if(N >= 1){
        std::cout << a;
    }
    if(N >= 2){
        std::cout << ", " << b;
    }
    for(int i =3; i <= N; ++i){
        nextTerm = a + b;
        std::cout << ", " << nextTerm;
        a = b;
        b = nextTerm;
    }
    std::cout << "\n";
    return 0;
}
