#include<iostream>
using namespace std;
int main() {
	double a, b;
	cout << "����������" << endl;
	cin >> a >> b;
	char ch;
	cout << "�����������" << endl;
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
			cout << "����0����������" << endl;
		else
			cout << "=" << a / b << endl;
		break;
	default:
			cout << "������Ƿ�" << endl;
	}
	if (ch == '%')
		cout << "������������������" << endl;
		int c, d;
	cin >> c >> d;
		cout <<"="<< c % d << endl;
	return 0;
}