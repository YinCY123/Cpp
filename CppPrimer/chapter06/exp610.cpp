#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int swap(int* a, int* b)
{
    cout << "\nbefore swap: "
         << "\n\tx = "
         << *a
         << "\n\ty = "
         << *b
         << endl; 
    
    int ptr = *a;
    *a = *b;
    *b = ptr;

    return 0;
}


int main()
{
    cout << "\nenter two integers: ";
    int x;
    int y;
    cin >> x >> y;
    swap(&x, &y);

    cout << "after swap: "
         << "\n\tx = "
         << x
         << "\n\ty = "
         << y
         << endl;

    return 0;
}
