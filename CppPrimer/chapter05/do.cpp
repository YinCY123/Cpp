#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

/*
do{

} while()
*/

int main()
{
    string rsp;
    do{
        cout << "Please enter two numbers: ";
        int v1, v2;
        cin >> v1 >> v2;
        cout << "The sum of "
            << v1 
            << " and " 
            << v2
            << " is: " 
            << v1 + v2
            << endl;
        cout << "Continue? Enter y or n: "; 
        cin >> rsp;
    }
    while(!rsp.empty() && rsp[0] != 'n'); 
}
