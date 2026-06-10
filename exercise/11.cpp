#include <iostream>

// int main() 
// {
//     int x;
//     bool flag = true;

//     while (flag)
//     {
//         std::cout << "Enter a year: ";
//         std::cin >> x;

//         // Input validation
//         if (std::cin.fail()) {
//             std::cin.clear();
//             std::cin.ignore(10000, '\n');
//             std::cout << "Invalid input. Please enter a valid integer." << std::endl;
//             continue;
//         }

//         if (x < 0) {
//             flag = false;
//         } else if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0)) {
//             std::cout << x << " is a leap year." << std::endl;
//         } else {
//             std::cout << x << " is not a leap year." << std::endl;
//         }
//     }

//     return 0;
// }


int main()
{
    int year = 2024;
    if ( (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ){
        std::cout << year << " is a leap year." << '\n';
    }else{
        std::cout << year << " is not a leap year." << '\n';
    }
    return 0;
}
