#include <iostream>
using namespace std;

int main(){
	float a = 0.1;
	float b = 0.2;
	float c = a + b;

	if( c == 0.3 ){
		cout << "0.1 + 0.2 = " << c << endl;
	}else{
		cout << "0.1 + 0.2 != " << c << endl;
	}
}
