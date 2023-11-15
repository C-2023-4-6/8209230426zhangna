#include<iostream>
using namespace std;
int main() {
	double a, b;
	cout << "请输入数字" << endl;
	cin >> a >> b;
	char ch;
	cout << "请输入运算符" << endl;
	cin >> ch;
	switch (ch) {
	case'+':
		cout<<"=" << a + b << endl;
		break;
	case'-':
		cout << "=" << a - b << endl;
		break;
	case'*':
		cout << "=" << a * b << endl;
		break; 
	case'/':
		if(b==0)
			cout << "错误，0不能做余数" << endl;
		else
			cout << "=" << a / b << endl;
		break;
	default:
			cout << "运算符非法" << endl;
	}
	if (ch == '%')
		cout << "请重新输入两个整数" << endl;
		int c, d;
	cin >> c >> d;
		cout <<"="<< c % d << endl;
	return 0;
}