#include <iostream>
 using namespace std;

int main()
{
    float f1 = 2.34E+10f;
    float f2 = f1 + 10; 

    cout.setf(ios_base::fixed, ios_base::floatfield); // fixed-point
    cout << "f1 = " << f1 << endl;
    cout << "f2 = " << f2 << endl;
    cout << "f - f2 : " << (f1 - f2) << endl;
    cout << "f1 = f2? " << (f1 - f2 == 0) << endl;
}