// A function is a reusable sequence of statements designed to do a particular job.

#include <iostream>

// void doPrint()
// {
//     std::cout << "In doPrint()\n";
// }

// void doB()
// {
//     std::cout << "In doB()\n";
// }

// void doA()
// {
//     std::cout << "Starting doA()\n";
//     doB();
//     std::cout << "Ending doA()\n";
// }

// int main()
// {
//     std::cout << "Starting main()\n";
//     doA();
//     std::cout << "Ending main()\n";

//     return 0;
// }

// ========== value  return function ========

// int returnFive()
// {
//     return 5;
// }

// int main()
// {
//     std::cout << returnFive() << '\n';
//     std::cout << returnFive() +2 << '\n';

//     returnFive(); // 5 is returned, but is ignored since main() doesn't do anything with it

//     return 0;
// }


int getValueFromUser()
{
    std::cout << "enter an integer: ";
    int input{};
    std::cin >> input;

    return input;
}

int main()
{
    int num { getValueFromUser() };
    std::cout << num << " doubled is: " << num * 2 << "\n";

    return 0;
}
