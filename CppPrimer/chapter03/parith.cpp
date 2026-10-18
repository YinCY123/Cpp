#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int *b = arr;
    int *e = arr + std::size(arr);
    while(b < e){
        cout << *b << " ";
        ++b;
    }
    cout << endl;
    return 0;
}
