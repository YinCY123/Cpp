#include <iostream>

// int main()
// {
//     std::cout << "Hello, World!" << std::endl;
//     return 0;
// }

// int main()
// {
//     std::cout << 5;
//     std::cout << -6.7;
//     std::cout << 'H';
//     std::cout << "Hello";

//     return 0;
// }


// int main()
// {
//     std::cout << "Enter three numbers: ";
//     int x {};
//     int y {};
//     int z {};
//     std::cin >> x >> y >> z;
//     std::cout << "You entered: " << x << ", " << y << ", and " << z << ".\n";
    
//     return 0;
// }


// int main()
// {
//     std::cout << sizeof(int) << std::endl;

//     return 0;
// }

// int five()
// {
//     return 5;
// }

// int main()
// {
//     int a { 2 };
//     int b { 2 + 3 };
//     int c { ( 2 * 3) + 4 };
//     int d { b };
//     int e { five() };

//     return 0;
// }

int main()
{
    std::cout << "enter an integer: ";
    
    int x {};
    std::cin >> x;
    // x = x * 2;
    std::cout << "Doube " << x << " is: " << x * 2 << "\n";
    std::cout << "Triple " << x << " is: " << x * 3 << "\n";

    return 0;
}
