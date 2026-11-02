#include <iostream>

int main()
{
    int i;
    double d;
    // i = d = 3.5;
    d = i = 3.5;
    std::cout << "i = " << i 
         << std::endl
         << "d = " << d
         << std::endl;

    return 0;
}

