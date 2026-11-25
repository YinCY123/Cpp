#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

struct Student{
    string name;
    int rollNumber;
    double marks;
};

void readStudentData(Student &s){
    cout << "Enter student name: ";
    getline(cin, s.name);

    cout << "enter roll number: ";
    cin >> s.rollNumber;

    cout << "enter marks:"; 
    cin >> s.marks;
}

void printStudentData(const Student& s){
    cout << "--- print student recod ---" << endl;
    cout << "Name: " << s.name << endl 
         << "Roll number: " << s.rollNumber << endl
         << "Marks: " << s.marks << endl;
}

int main()
{
    Student s;
    readStudentData(s);
    printStudentData(s);

    return 0;
}


