#include <iostream>

// int main()
// {
//     const double gravity{9.8};
//     // gravity = 9.8; // will cause error
//     std::cout << gravity << '\n';
//     return 0;
// }

// void printInt(const int x)
// {
//     std::cout << x << '\n';
// }

// int main()
// {
//     printInt(5);
//     printInt(6);

//     return 0;
// }

// Why variables should be made constant

/*
Every moving part in a system increases complexity 
and the risk of defect or failure. Non-constant 
variables are moving parts, while constant variables 
are not.
*/


// #define MY_NAME "YinCY" // object-like macro with substitution text also named constants

// int main()
// {
//     std::cout << "My name is: " << MY_NAME << '\n';

//     return 0;
// }

// void someFcn()
// {
//     // even though gravity is defined inside this function
//     // the preprocessor will replace all subsequent occurences 
//     // of gravity in the rest of the file.
//     #define gravity 9.8
// }

// void printGravity() // including this one causing a compiler error
// {
//     std::cout << "gravity is: " << gravity << '\n';
// }

// int main()
// {
//     printGravity(3.17);
//     return 0;
// }

// literal

// Just like objects have a type, all literals have a type. The type of a 
// literal is deduced from the literal’s value.

// int main()
// {
//     std::cout << 5 << '\n';
//     std::cout << 5L << '\n';
//     std::cout << 5u << '\n';


//     return 0;
// }

int main()
{
    int a {5};
    unsigned int b {6};
    long c {7};

    std::cout << a << '\n';
    std::cout << b << '\n';
    std::cout << c << '\n';

    return 0;
}