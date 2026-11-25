#include <iostream>
using std::cout;
using std::endl;

#include <fstream>
using std::ofstream;

int main()
{
    ofstream file("mydata.txt", std::ios::app);

    if(file.is_open()){
        file << "New line of the content." << endl;
        cout << "The new content has been added to the file." << endl;
        file.close();
    }else{
        cout << "Error: Could not open file.\n";
    }

    return 0;
}
