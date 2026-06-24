#include <iostream>

int main()
{
    int N {3};
    std::cout << "Multiplication Table for 3: " << '\n';
    for (int i = 1; i <= 10; ++i){
        std::cout << " 3 x " << i << " = " << 3 * i << '\n';
    }
    return 0;
}
