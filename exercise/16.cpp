#include <iostream>

int main()
{
    int N {10};
    long product {1};
    for (int i = 1; i <= N; ++i){
        product *= i;
    }

    std::cout << "Factorial of 5 is: " << product << '\n';
    return 0;
}
