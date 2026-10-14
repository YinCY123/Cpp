#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    cout << "\nEnter two numbers: ";
    int v1, v2;
    cin >> v1 >> v2;
    cout << "\nThe sum of "
         << v1 
         << " and "
         << v2
         << " is: "
         << v1 + v2
         << "\n"
         << endl;
    
    return 0;
}
