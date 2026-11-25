#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <vector>
using std::vector;

int main()
{
	cout << "Enter the number of elements (N): ";
	int N;
	cin >> N;
	vector<int> arr;
	
	cout << "Enter the elements: ";
	long long sum = 0;
	
	for(auto i = 0; i != N; ++i){
		int tmp;
		cin >> tmp;
		arr.push_back(tmp);
	}

	for(auto i = 0; i != N; ++i){
		sum += arr[i];
		cout << "The element " 
		     << i + 1 
		     << ": " 
		     << arr[i] 
		     << endl;
	}

	cout << "\nThe sum of all elements in the array is : " 
	     << sum 
	     << endl;
	return 0;
}

