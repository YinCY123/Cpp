#include <iostream>
using std::cout;
using std::endl;
using std::cin;

char gradeFunction(double avg){
    if(avg > 100 || avg < 0){
        cout << "The number you enter is out range." << endl;
        return ' ';
    }else if(avg > 90){
        return 'A';
    }else if(avg >=80){
        return 'B';
    }else if(avg >= 70){
        return 'C';
    }else if(avg >= 60){
        return 'D';
    }else{
        return 'E';
    }
}

int main()
{
    int count = 0;
    double sum = 0;
    double grade;

    cout << "Please enter the grades: ";

    while(cin >> grade){
        sum += grade;
        ++count;
    }

    double avg = sum / count;

    cout << "Average: " << avg << endl;
    cout << "Letter grade: " << gradeFunction(avg) << endl;

    return 0;
}
