#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

/*
Templates let you write a function or class
that can be works with different data types.


They help avoid repeatng code and make programs
more flexible.

syntax
return_type function_name(T parameter){
    // function body
}

*/


// template <typename T>
// T add(T a, T b){
//     return a + b;
// }

// int main()
// {
//     cout << add<int>(5, 3) << endl;
//     cout << add<double>(2.5, 1.5) << endl;

//     return 0;
// }

//=====================

// template <typename T>
// class Box {
//     public:
//         T value;
//         Box(T value){
//             this->value = value;
//         }

//         void show(){
//             cout << "Value: " << value << endl;
//         }
// };

// int main(){
//     Box<int> intBox(50);
//     Box<string> strBox("Hello");

//     intBox.show();
//     strBox.show();

//     return 0;
// }


//=====================

template <typename T1, typename T2>
class Pair{
    public:
        T1 first;
        T2 second;

        Pair(T1 first, T2 second){
            this->first = first;
            this->second = second;
        }

        void display(){
            cout << "First: "
                 << first
                 << "; "
                 << "Second: "
                 << second
                 << endl;
        }
};

int main()
{
    Pair<string, int> pearson("John", 30);
    Pair<int, double> score(51, 9.5);

    pearson.display();
    score.display();

    return 0;
}
