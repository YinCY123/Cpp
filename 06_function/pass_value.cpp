#include <iostream>
using namespace std;

//The parameter is a copy of the original variable
int foo(int x){
	x += 10;
	return x;
}

int main(){
	int num1 = 10;
	int num2 = foo (num1);
	
	cout << "num1 = " << num1 << endl;
	return 0;
}
