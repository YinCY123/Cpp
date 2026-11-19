#include <iostream>
using std::cout;
using std::endl;

class Employee{
    private:
        int salary;

    public:
        Employee(int s){ // constructor
            salary = s;
        }
        
        // declare a friend function
        friend void displaySalary(Employee emp);
};

void displaySalary(Employee emp){
    cout << "Salary: " << emp.salary << endl;
}

int main()
{
    Employee myEmp(50000);
    displaySalary(myEmp);
    return 0;
}
