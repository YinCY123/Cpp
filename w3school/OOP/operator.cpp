#include <iostream>
using std::cout;
using std::endl;
using std::ostream;

/*
With operator overloading, you decide what an 
operator does for objects of your class.
*/


class Point{
    public:
        int x;
        int y;

        Point(int x, int y){ // constructor
            this->x = x;
            this->y = y;
        }

        ~Point(){
            cout << "The object is destroyed." << endl;
        }

        Point operator+(Point other){
            return Point(x + other.x, y + other.y);
        }

        bool operator==(Point other){
            return x == other.x &&  y == other.y;
        }
};

ostream& operator<<(ostream& out, Point p){
    out << "(" << p.x << ", " << p.y << ")" << endl;
    return out;
}

int main()
{
    Point p1(1, 2);
    Point p2(3, 4);

    // Point p3 = p1 + p2;
    // cout << p3.x << ", " << p3.y << endl;

    // if(p1 == p2){
    //     cout << "The points are equal\n";
    // }else{
    //     cout << "The points are not equal\n";
    // }

    cout << p1 + p2;

    return 0;
}
