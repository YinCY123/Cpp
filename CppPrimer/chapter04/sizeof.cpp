#include <iostream>
using std::cout;
using std::endl;


int main()
{

    char ca = 'e';
    // std::wchar_t cw = 'e';
    // std::char8_t ca8 = 'e';
    // std::char16_t ca16 = 'e';
    // std::char32_t ca32 = 'e';
    
    bool b = true;

    short si = 10;
    int i = 10;
    long il = 10;
    long long ill = 10;

    float f = 1.2;
    double d = 1.2;
    long double ld = 1.2;


    cout << "sizeof(ca): "
         << sizeof(ca)
         << '\n'
        //  << "sizeof(ca8): "
        //  << sizeof(ca8)
        //  << '\n'
        //  << "sizeof(ca16): "
        //  << sizeof ca16
        //  << '\n'
        //  << "sizeof(ca32): "
        //  << sizeof(ca32)
        //  << '\n'
         << "sizeof(b): "
         << sizeof(b)
         << '\n'
         << "sizeof(si): "
         << sizeof(si)
         << '\n'
         << "sizeof(i): "
         << sizeof(i)
         << '\n'
         << "sizeof(il): "
         << sizeof(il)
         << '\n'
         << "sizeof(ill): "
         << sizeof(ill)
         << '\n'
         << "sizeof(f): "
         << sizeof(f)
         << '\n'
         << "sizeof(d): "
         << sizeof(d)
         << '\n'
         << "sizeof(ld): "
         << sizeof(ld)
         << '\n'
         << endl;
    return 0;
}

