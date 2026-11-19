#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

/*

Inside a class, this points to the current object, so 
this->brand always means the attribute.

Without this->, brand = brand; only gives the parameter 
its own value, and the attribute is not changed.

*/

// class Car{
//     public:
//         string brand;
//         int year;

//         Car(string brand, int year){
//             this->brand = brand;
//             this->year = year;
//         }
// };

// int main()
// {
//     Car myCar("Ford", 1968);
//     cout << myCar.brand << ", " << myCar.year << endl;

//     return 0;
// }


// ===============

class Player{
    public:
        string name;
        int score{0};

        void addScore(int score){
            this->score += score;
        }
};

int main()
{
    Player p1;
    p1.name = "Lima";
    p1.addScore(10);
    p1.addScore(5);
    cout << p1.name << " has " << p1.score << " points." << endl;

    return 0;
}
