#include <iostream>
using std::cout;
using std::endl;

#include <fstream>
using std::ofstream;
using std::ifstream;

#include <string>
using std::string;

int main()
{
    string mytext;

    ifstream MyReadFile("filename.txt");

    while(getline(MyReadFile, mytext)){
        cout << mytext << endl;;
    }
    MyReadFile.close();

    return 0;
}
