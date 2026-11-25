#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
	int width;
	cout << "enter a number: ";
	cin >> width;
	for(auto i = 1; i <= width; ++i){
		for(auto j = 1; j <= width; ++j){
			cout << " * ";
		}
		cout << endl;
	}

	return 0;
}
