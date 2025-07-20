#include <iostream>
using namespace std;

int foo(int *p){
	(*p) += 10;
	return *p;
}

int main(){
	int num1 = 10;
	int *p = &num1;
	int num2 = foo(p);
	
	cout << "num1 = " << num1 << endl;
	return 0;
}
