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


// int getValueFromUser()
// {
//     std::cout << "enter an integer: ";
//     int input{};
//     std::cin >> input;

//     return input;
// }

// int main()
// {
//     int num { getValueFromUser() };
//     std::cout << num << " doubled is: " << num * 2 << "\n";

//     return 0;
// }

// =========== non-value return function ==========

// void printHi()
// {
//     std::cout << "Hi\n";
//     return; // optional, but can be used to exit the function early, tell compiler to return to the caller
// }

// int main()
// {
//     printHi();

//     return 0;
// }

// void returnNothing()
// {

// }

// int returnFive()
// {
//     return 5;
// }

// int main()
// {
//     returnNothing();
//     returnFive();

//     std::cout << returnFive() << "\n";
//     // std::cout << returnNothing() << "\n";

//     return 0;
// }

// return a value from void function is a compile error


// =========== function parameters and arguments ==========

// int getValueFromUser()
// {
//     std::cout << "Enter an integer: ";
//     int input{};
//     std::cin >> input;

//     return input;
// }

// void printDouble(int value)
// {
//     std::cout << value << " doubled is: " << value * 2 << '\n';
// }

// int main()
// {
//     printDouble( getValueFromUser() );
//     return 0;
// }


// int add(int x, int y)
// {
//     return x + y;
// }

// int multiply(int z, int w)
// {
//     return z * w;
// }

// int main()
// {
//     std::cout << add(4, 5) << '\n';
//     std::cout << add(1+2, 3*4) << '\n';

//     int a{ 5 };
//     std::cout << add(a, a) << '\n';

//     std::cout << add(1, multiply(2, 3)) << '\n';
//     std::cout << add(1, add(2, 3)) << '\n';

//     return 0;
// }

// int getValuesFromUser()
// {
//     int input;
//     std::cout << "enter an integer: ";
//     std::cin >> input;
//     return input;
// }

// int doubleNumber()
// {
//     return 2 * getValuesFromUser();
// }

// int main()
// {
//     int x { doubleNumber() };
//     std::cout << "Doubled is: " << x << '\n';
// }


// ============ forward declaration and definitions =============
// int add(int x, int y); 

/* forward declaration of add, 
function declarations do not need 
to specify the names of the parameters 
*/

// int add(int, int); // this is totaly fine

// int main()
// {
//     std::cout << "The sum of 3 and 4 is: " << add(3,4) << '\n';
//     return 0;
// }


// ========= macro ===========
#define My_NAME "alex"

int main()
{
    std::cout << "my name is: " << My_NAME << "\n";
    return 0;
}
