#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <vector>
using std::vector;

int main()
{
    vector<int> iv = {100,95,33,56,66,78,82,83,88,64,61,60};
    for(auto i : iv){
        cout << (( i > 90 ) ? "high pass" 
                            : ( i >= 60 && i <= 75) ? "low pass"
                            : ( i < 60) ? "failed" : "pass") 
             << endl;
    }

    cout << "===================" << endl;

    for(auto i : iv){
        if(i > 90){
            cout << "high pass" << " ";
        }else if (i >= 60 && i <= 75)
        {
            cout << "low pass" << " ";
        }else if(i < 60){
            cout << "failed" << " ";
        }else{
            cout << "pass" << " ";
        }

        cout << endl;
    }

    return 0;
}

