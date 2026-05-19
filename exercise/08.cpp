#include <iostream>

int main()
{
    double principal = 1000; 
    double rate = 10;
    double time = 3;

    double SI = (principal * rate * time)/100.0;
    std::cout << "Simple Interest (SI) is: " << SI << "\n";

    return 0;
}
