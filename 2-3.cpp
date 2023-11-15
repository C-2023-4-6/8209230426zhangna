#include<iostream>
using namespace std;
int main() {
	double a, b, c;
	cin >> a>>b>>c;
	if (a + b > c && a + c > b && b + c > a) {
		cout << "周长为" << a + b + c << endl;
		if (a == b || a == c || b == c)
			cout << "此三角形为等腰三角形" << endl;
		else
			cout << "此三角形不是等腰三角形" << endl;
	}
	else
		cout << "不是三角形" << endl;
	return 0;
}