#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

int main()
{
	cout << "enter a string: ";
	string str;
	cin >> str;

	bool flag = true;
	int i = 0;
	int j = str.length() - 1;
	while(i <= j){
		if(str[i] != str[j]){
			flag = false;
			break;
		}
		++i; 
		--j;
	}

	if(flag){
		cout << str << " is a palindrome string." << endl;
	}else{
		cout << str << " is not a palindrome string." << endl;
	}

	return 0;
}
