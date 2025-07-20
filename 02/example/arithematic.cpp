#include <iostream>
using namespace std;

int main(){
	
	int a;
	int b;
	double c;

	cout << "please enter two numbers: " << endl;
	cin >> a >> b;
	
	c = (float)a / b;

	cout << "a + b = " << ( a + b ) << endl;
	cout << "a - b = " << ( a - b ) << endl;
	cout << "a * b = " << ( a * b ) << endl;
	cout << "a / b = " << c << endl;
	cout << "a mode b = " << ( a % b ) << endl;

	return 0;
}

