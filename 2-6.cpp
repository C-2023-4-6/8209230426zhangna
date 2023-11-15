#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	cout << "请输入两个正整数" << endl;
	int a, b,x,y;
	cin >> a >> b;
	if (a <= 0 || b <= 0)
		cout << "请输入两个正整数" << endl;
	x = max(a, b);
	y = min(a, b);
	while ((x % y) != 0) {
		int t = x;
		x = y;
		y = t % y;
	}
		cout << "最大公约数为" << y << endl;
		cout << "最小公倍数为" << (a * b) / y << endl;
	return 0;
}