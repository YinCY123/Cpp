#include <iostream>
using std::cout;
using std::cin;
using std::endl;

long fact(int n){
	if(n == 0){
		return 1;
	}
	return n * fact(n - 1);
}

int main()
{
	cout << "Enter a number: ";
	int n;
	cin >> n;
	long sum;
	sum = fact(n);

	cout << sum << endl;
	return 0;
}
