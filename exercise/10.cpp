#include <iostream>

int max(int a, int b, int c)
{
    int tmp = a;
    for( int x : {a, b, c}){
        if (tmp < x){
            tmp = x;
        }
    }
    return tmp;
}

int main()
{
    int a = 10;
    int b = 40;
    int c = 30;
    std::cout << max(a, b, c) << " is the largest number." << "\n";
    
    return 0;
}
