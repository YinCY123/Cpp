#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;


int main()
{
	cout << "enter a string (may include space): ";
	string str;
	getline(cin, str);

	int len = 0;
	for(auto i : str){
		++len;
	}

	cout << "The length of the string (manually conted) is: " << len << endl;

	return 0;
}

