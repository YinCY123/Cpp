#include <iostream>
using namespace std;

int main(){
	int a = 2;
	int b = 3;
	int c = 4;
	
	int d = a + b * c;
	int e = (a + b) * c;

	cout << "a + b * c = " << d << endl;
	cout << "(a + b) * c = " << e << endl;

	return 0;
}
