#include <iostream>

int main()
{
    short short_value = 32767;
    short_value += 1;
    std::cout << "short_value: " << short_value << std::endl;

    int val = 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2;
    std::cout << val << std::endl;

    std::cout << "(a): ";
    int a = -30 * 3 + 21 /2;
    std::cout << a << std::endl;

    std::cout << "(b): ";
    int b = -30 + 3 * 21 /5;
    std::cout << b << std::endl;

    std::cout << "(c): ";
    int c = 30 / 3 * 21 % 5;
    std::cout << c << std::endl;

    std::cout << "(d): ";
    int d = -30 / 3 * 21 % 4;
    std::cout << d << std::endl;

    std::cout << "please enter a value: ";
    int ia;
    std::cin >> ia;
    if(ia % 2 == 0){
        std::cout << "The value you enter is even.";
    }else{
        std::cout << "The value you enter is odd.";
    }
    std::cout << std::endl;

    return 0;
}

