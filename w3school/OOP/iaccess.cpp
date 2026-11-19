#include <iostream>
using std::cout;
using std::endl;

// base class
class Employee {
    protected:
        int salary;
};

class Programmer: public Employee {
    public:
        int bonus;

        void setSalary(int s){
            salary  = s;
        }

        int getSalary(){
            return salary;
        }
};

int main()
{
    Programmer myObj;
    myObj.setSalary(50000);
    myObj.bonus = 15000;
    
    cout << "Salary: " << myObj.getSalary() << "\n";
    cout << "Bonus: " << myObj.bonus << "\n";

    return 0;
}
