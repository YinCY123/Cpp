#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

class Resource{
    string id;

    public: 
        Resource(string id = "0123"){
            this -> id = id;
            cout << "Resource [" << id << "] aquired" << endl;
        }

        ~Resource(){
            cout << "Resource [" << id << "] released." << endl;
        }
};

int main()
{
    Resource r;
    return 0;
}
