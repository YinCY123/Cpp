#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int A = 50;
	int B = 15;
	int div = A;
	if(div > B){
		div = B;
	}

	for(auto i = div; i > 0; --i){
		if((A % i == 0) && (B % i == 0)){
			cout << "The largest common divisor is: " 
			     << i 
			     << endl;
			return 0;
		}
	}
}
