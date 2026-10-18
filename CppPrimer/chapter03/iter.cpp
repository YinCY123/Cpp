#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

// int main()
// {
//     string str="some string";
//     if(str.begin() != str.end()){
//         auto it = str.begin();
//         *it = toupper(*it);
//     }
//     cout << str << endl;

//     return 0;
// }


int main()
{
    string str{"some string"};
    for(auto it = str.begin(); it != str.end() && !isspace(*it); ++it){
        *it = toupper(*it);
    }
    cout << str << endl;

    return 0;
}
