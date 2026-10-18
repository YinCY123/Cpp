#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
	cout << "please enter a sequence of integers: ";
	vector<int> vec;
	int i;
	while (cin >> i){
		vec.push_back(i);
	}

	for(int i : vec){
		cout << i << " ";
	}
	cout << endl;

	return 0;
}
