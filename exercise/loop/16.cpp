#include <cctype>
#include <iostream>
#include <string>

int main()
{
    std::cout << "enter a string: ";

    std::string str;
    if (!std::getline(std::cin, str)) {
        return 0;
    }

    int vowelCount = 0;
    int consonantCount = 0;

    for (char character : str) {
        const unsigned char c = static_cast<unsigned char>(character);
        if (!std::isalpha(c)) {
            continue;
        }

        switch (std::tolower(c)) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                ++vowelCount;
                break;
            default:
                ++consonantCount;
                break;
        }
    }

    std::cout << "Total Vowels: " << vowelCount << '\n';
    std::cout << "Total Consonants: " << consonantCount << '\n';
    return 0;
}
