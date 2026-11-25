#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <set>
using std::set;


int main()
{
    double sideA = 10, sideB = 10, sideC = 10;
    set<double> vec = {sideA, sideB, sideC};

    bool flag = (sideA + sideB > sideC) && (sideA + sideC > sideB) && (sideB + sideC > sideA) && (sideA > 0 && sideB > 0 && sideC > 0);

    if((vec.size() == 3) && flag){
        cout << "The  triangle is Scalene." << endl;
    }else if((vec.size() == 2) && flag){
        cout << "The triangle is Isoceles." << endl;
    }else if((vec.size() == 1) && flag){
        cout << "The triangle is Equilateral." << endl;
    }else{
        cout << "Invalid triangle." << endl;
    }
    return 0;
}
