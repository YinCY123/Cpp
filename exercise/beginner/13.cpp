#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
    int a;
    cout << "enter the student's score (0-100): ";
    cin >> a;
    if(a < 60){
        cout << "F" << endl;
    }else if(a < 70){
        cout << "D" << endl;
    }else if(a < 80){
        cout << "C" << endl;
    }else if(a < 90){
        cout << "B" << endl;
    }else if(a <= 100){
        cout << "A" << endl;
    }else{
        cout << "The number you enter is not in the range." << endl;
    }

    return 0;
}
