#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <vector>
using std::vector;

int main()
{
	vector<int> arr = {10, 30, 40, 60, 20};
	
	cout << "Enter the target value: ";
	int target;
	cin >> target;
	cout << "Array elements are: ";
	for(auto i = 0; i != arr.size() - 1; ++i){
		cout << arr[i] << ", ";
	}
	cout << arr[arr.size() - 1] << endl;
	
	for(auto j = 0; j != arr.size(); ++j){
		if(target == arr[j]){
			cout << "Element " << target << " found at index " << j << endl;
			return 0;	
		}
	}
}
