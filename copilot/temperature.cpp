#include <iostream>
using namespace std;

int main(){
	float celsius;
	cout << "请输入摄氏温度: ";
	cin >> celsius;

	float fahrenheit = celsius * 9.0 / 5 + 32;
	cout << "对应的华氏摄氏度为: " << fahrenheit << endl;

	return 0;
}
