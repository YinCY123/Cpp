#include <iostream>
#include <cstring>

int main()
{
    char str1[] = "some string";
    char str2[] = "some string";

    // std::cout << str1 + " " + str2 << std::endl;
    std::cout << strcmp(str1,str2)
              << std::endl;

    return 0;
}
