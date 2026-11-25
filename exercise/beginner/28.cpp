#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <vector>
using std::vector;

int main()
{
	vector<int> arr = {10, 20, 30, 40, 50, 60};
	vector<int> reversed(arr.size(),0);
	int sz = arr.size() - 1;

	for(auto i  = 0; i != arr.size(); ++i){
		reversed[sz - i] = arr[i];
	}


	cout << "Original Array: ";
	for(auto i = 0; i != arr.size(); ++i){
		cout << arr[i] << (i < sz ? ", " : "");
	}
	cout << endl;

	cout << "Reversed Array: ";
	for(auto j = 0; j != reversed.size(); ++j){
		cout << reversed[j] << (j < sz ? ", " : "");
	}
	cout << endl;

	return 0;
}
