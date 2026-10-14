#include <iostream>
#include <string>

std::string word;
int main()
{
    std::cout << "please enter a string: ";
    // getline(std::cin, word);
    std::cin >> word;
    std::cout << word << std::endl;

    return 0;
}
