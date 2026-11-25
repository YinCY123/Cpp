#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

int main()
{
    string str = "PYnative c++ Exercise";
    string sub_str = "c++";
    int len = sub_str.length();

    for(auto i = 0; i <= str.length() - len; ++i){
        if(str.substr(i, len) == sub_str){
            cout << "Substring found!" << endl;
            cout << "Starting index: " << i << endl;
            break;
        }
    }
    return 0;
}
