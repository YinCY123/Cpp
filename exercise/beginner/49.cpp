#include <iostream>
using std::cout;
using std::cin;
using std::endl;

enum Day{
    Sunday,
    Monday,
    Tusday, 
    Wednesday, 
    Thriday,
    Friday,
    Sateday
};

int main()
{
    enum Day val = Wednesday;
    cout << "The integer value of Wednesday is: " << val << endl;

    return 0;
}

