#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	cout << "����������������" << endl;
	int a, b,x,y;
	cin >> a >> b;
	if (a <= 0 || b <= 0)
		cout << "����������������" << endl;
	x = max(a, b);
	y = min(a, b);
	while ((x % y) != 0) {
		int t = x;
		x = y;
		y = t % y;
	}
		cout << "���Լ��Ϊ" << y << endl;
		cout << "��С������Ϊ" << (a * b) / y << endl;
	return 0;
}