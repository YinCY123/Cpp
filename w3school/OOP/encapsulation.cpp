#include <iostream>
using std::cout;
using std::endl;

/*
If you want others to read or modify the value of 
a private member, you can provide public get and 
set methods.
*/


class Employee{
    private:
        int salary;

    public:
        void setSalary(int s){
            salary = s;
        }

        int getSalary(){
            return salary;
        }
};

int main()
{
    Employee myObj;

    myObj.setSalary(50000);
    cout << myObj.getSalary() << endl;

    return 0;
}
