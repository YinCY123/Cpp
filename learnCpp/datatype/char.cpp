#include <iostream>

// int main()
// {
//     char ch1{ 97 };
//     char ch2{ 'a' };
//     std::cout << "ch1 is: " << ch1 << "\nch2 is: " << ch2 << '\n';
//     return 0;
// }

// int main()
// {
//     std::cout << "Enter a character: ";
//     char ch{};
//     std::cin >> ch;
//     std::cout << "You entered: " << ch << '\n';

//     std::cin >> ch;
//     std::cout << "You entered: " << ch << '\n';

//     return 0;
// }


// extract white space
// int main()
// {
//     std::cout << "Enter a character: ";
//     char ch{};
//     std::cin.get(ch);
//     std::cout << "Your entered: \a" << ch << '\n';

//     std::cin.get(ch);
//     std::cout << "Your entered: \a" << ch << '\n';

//     return 0;
// }


// int add(int x, int y)
// {
//     return x + y;
// }

// int main()
// {
//     std::cout << add(1, 2) << '/n'; // use backslash
//     return 0;
// }


// explicit type conversion

// void print( int x )
// {
//     std::cout << x << '\n';
// }

// int main()
// {
//     print( static_cast<int>(5.5)); // explicitly convert double value 5.5 to an int
// }


// int main()
// {
//     char ch {97}; // for ASCII 'a'
//     std::cout << ch << " has value " << static_cast<int>(ch) << '\n';
//     return 0;
// }

// #include <cstdint>

// int main()
// {
//     std::int8_t myInt{65};
//     std::cout << "myInt is: " << myInt << '\n';
//     std::cout << "myInt is: " << static_cast<int>(myInt) << '\n';
    
//     return 0;
// }


int main()
{
    char ch1{};
    std::cout << "Enter a character: ";
    std::cin >> ch1;
    int a = ch1;
    std::cout << "you entered " << ch1 << ", which has ASCII code " << a << '\n';

    return 0;
}
