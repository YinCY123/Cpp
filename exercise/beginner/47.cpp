#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <vector>
using std::vector;

int main()
{
    int vec[] = {10, 20, 30};
    int* ptr = vec;
    cout << "The address of the first element: " 
         << ptr 
         << endl
         << "The value of the first element: "
         << *ptr
         << endl;

    ptr += 1;
    cout << "The address of the second element: " 
         << ptr 
         << endl
         << "The value of the second element: "
         << *ptr
         << endl;
    return 0;
}
