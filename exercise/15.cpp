#include <iostream>

int main()
{
    int N {10};
    int sum {0};
    for (int i = 1; i <= N; ++i){
        sum += i;
    }
    std::cout << "The sum of natural numbers up to " << N << " is: " << sum << '\n';

    return 0;
}
