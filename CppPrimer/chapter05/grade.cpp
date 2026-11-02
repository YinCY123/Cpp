#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <vector>
using std::vector;

#include <string>
using std::string;


// int main()
// {
//     vector<string> scores = {"F", "D", "C", "B", "A", "A++"};
//     string lettergrade;
//     int grade;
//     cout << "Please enter the grade(s): "; 

//     while(cin >> grade){
//         if(grade < 60){
//             lettergrade = scores[0];
//             cout << lettergrade << endl;
//         }else{
//             lettergrade = scores[(grade - 50)/10];
//             if(grade != 100){
//                 lettergrade += "+";
//                 cout << lettergrade << endl;
//             }else if (grade % 10 < 3)
//             {
//                 lettergrade += "-";
//                 cout << lettergrade << endl;
//             }
//         }
//     }


//     return 0;
// }


int main()
{
    vector<string> scores = {"F", "D", "C", "B", "A", "A++"};
    cout << "Enter the numeric grade: ";
    int grade;
    while(cin >> grade){
        if(grade < 60){
            cout << "F" << endl;
        }else if(grade >= 60 & grade < 70){
            cout << "D" << endl;
        }else if(grade >= 70 & grade < 80){
            cout << "C" << endl;
        }else if(grade >= 80 & grade < 90){
            cout << "B" << endl;
        }else if(grade >= 90 & grade < 100){
            cout << "A" << endl;
        }else if(grade == 100){
            cout << "A++" << endl;
        }else{
            cout << "The number should in range [0,100]." << endl;
        }
    }
    return 0;
}
