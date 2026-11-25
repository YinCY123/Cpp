#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	cout << "enter the length: ";
	int length;
	cin >> length;

	for(auto i = 1; i <= length; ++i){
		for(auto j = length; j > 0; --j){
			cout << " * ";
		}
		cout << endl;
	}
	return 0;
}
