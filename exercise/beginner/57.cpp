#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <fstream>
using std::ifstream;

int main()
{
    string line;
    ifstream file("mydata.txt");

    int cnt = 0;

    while(getline(file, line)){
        ++cnt;
    }

    cout << "Total numbe rof lines in mydata.txt: " << cnt << endl;

    return 0;
}
