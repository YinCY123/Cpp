#include <iostream>
using namespace std;

int main(){
	int n;
	int sum = 0;

	cout << "please enter a integer number: ";
	cin >> n;

	while ( n > 0 ){
		sum += n;
		n--;
	}

	cout << "the sum of 1 to " << n << " is: " << sum << endl; 

	return 0;

}
