#include <iostream>
using std::cout;
using std::endl;

/*
By default, all members of a class are private if 
you don't specify an access specifier.
*/

class MyClass{
    public:
        int x; 
    
    private:
        int y;
};

// class MyClass{
//     int x; // private 
//     int y; // private
// };

int main()
{
    MyClass myObj;
    myObj.x = 25;
    // myObj.y = 50;

    cout << myObj.x << endl;

    return 0;
}
