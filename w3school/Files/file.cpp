#include <iostream>
#include <fstream>
using std::ofstream;

int main()
{
    // create and open a txt file
    ofstream MyFile("filename.txt");

    // write to the file
    MyFile << "Files can be tircky, but it is fun enough!";

    // close the file. clean up unnecessary memeory space
    MyFile.close();
}
