#include<iostream>
using namespace std;
int main() {
	cout << "请输入一个字母" << endl;
	char x;
	cin >> x;
	if (x >= 97 && x <= 122)
		cout << "大写字母为" << char(x-32) << endl;
	else
		cout << x + 1 << endl;
	return 0;
}