#include <iostream>
using namespace std;

int main(){
	const float pi = 3.1415926;
	float s = 0;
	float r = 0;

	cout << "please enter the radius of the circle: " << endl;
	cin >> r;

	s = pi * r * r;
	cout << "the area of the circle is: " << s << endl;

	return 0;
}
