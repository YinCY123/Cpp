#include <iostream>
#include <cstring>


int main()
{
    const char arr1[] = "some string";
    const char arr2[] = " a different string";
    constexpr std::size_t total_length = std::strlen(arr1) + std::strlen(arr2);
    char arr3[total_length];
    strcpy(arr3, arr1);
    strcat(arr3, arr2);
    
    std::cout << arr3 << std::endl;

    return 0;
}
