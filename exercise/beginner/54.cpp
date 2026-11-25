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
    string line;
    ifstream file("mydata.txt");

    if(file.is_open()){
        cout << "--- content of mydata.txt ---\n";
        while(file){
            getline(file, line);
            cout << line << endl;
        }
        file.close();
    }else{
        cout << "Error: Unable to open file mydata.txr." << endl;
    }

    return 0;
}
