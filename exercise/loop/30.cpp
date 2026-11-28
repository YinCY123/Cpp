#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

int main()
{
    int tryNum = 0;
    string password = "Pass1212";
    cout << "--- Password Lock Simmulation ---" << endl;
    do
    {
        tryNum++;
        cout << "Attempt " << tryNum << "/3. Enter password: ";
        string pw;
        cin >> pw;
        if(pw == password){
            cout << "Access GRANTED. Welcome!" << endl;
            break;
        }else{
            cout << "Wrong password. Access denied. Try agin." << endl;
        }

    } while (tryNum < 3);

    return 0;
}
