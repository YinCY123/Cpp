#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main()
{
	vector<string> str;
	cout << "please enter a sequence of strings: ";

	string s;
	while(cin >> s){
		str.push_back(s);
	}
	

	// print strings stored in a vector
	string divider(15, '=');
	cout << divider << endl;
	cout << "Print strings stored in a vector" << endl;
	cout << divider << endl;

	for(string s : str){
		cout << s << " ";
	}

	cout << endl;

	return 0;
}
