#include <iostream>
using std::cout;
using std::endl;

#include <fstream>
using std::ofstream;
using std::ifstream;

int main()
{
    ofstream myFile("mydata.txt");

    if(myFile.is_open()){
        myFile << "Hello, File Handling!" << endl;
        cout << "Successfully wrote data to mydata.txt" << endl;
        myFile.close();
    }else{
        cout << "Unable to open file mydata.txt" << endl;
    }

    return 0;
}
