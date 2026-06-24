#include <iostream>

int main()
{
    double a {10};
    double b {10};
    double c {8};

    if( a+b < c || a+c < b || b+c<a){
        std::cout << "The given sides DO NOT form a valid triangle." << '\n';
    }else if(a - b == 0 & a - c == 0){
        std::cout << "The triangle is Equilateral." << '\n';
    }else if(a - b == 0 & a - c != 0){
        std::cout << "The triangle is Isosceles." << '\n';
    }else if(a - b != 0 & a - c != 0 & b - c != 0){
        std::cout << "The triangle is Scalene." << '\n';
    }
    return 0;
}
