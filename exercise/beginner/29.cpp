#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <vector>

int main()
{
	std::vector<int> arr = {1, 6, 3, 8, 5, 10, 7};
	std::vector<int> odd;
	for(auto i : arr){
		if(i % 2 == 0){
			odd.push_back(i);	
		}
	}

	cout << "The even numbers in the array are: ";
	for(auto j : odd){
		cout << j << " ";
	}
	cout << endl;

	return 0;
}
