#include<iostream>
using namespace std;
int main() {
	cout << "������һ����ĸ" << endl;
	char x;
	cin >> x;
	if (x >= 97 && x <= 122)
		cout << "��д��ĸΪ" << char(x-32) << endl;
	else
		cout << x + 1 << endl;
	return 0;
}