#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <vector>

int main()
{
	std::vector<int> arr = {10, 20 ,30, 40, 50};
	cout << "Array before swap: ";
	for(auto i : arr){
		cout << i << " ";
	}
	cout << endl;
	
	arr[0] = arr[0] + arr[arr.size() - 1];
	arr[arr.size() - 1] = arr[0] - arr[arr.size() - 1];
	arr[0] = arr[0] - arr[arr.size() - 1];

	cout << "Array after swap: ";
	for(auto j : arr) {
		cout << j << " ";
	}

	cout << endl;

	return 0;
}
