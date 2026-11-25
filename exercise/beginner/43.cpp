#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int* safe_ptr = nullptr;

    if(safe_ptr == nullptr){
        cout << "Pointer is null, cannot dereference." 
             << endl;
        
        int tmp = 77;
        safe_ptr = &tmp;
    }
    
    if(safe_ptr != nullptr){
        cout << "Pointer is now valid. Dereferenced value: " 
             << *safe_ptr 
             << endl; 
    }

    return 0;
}
