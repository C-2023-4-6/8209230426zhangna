#include<iostream>
using namespace std;
int main() {
	int all = 2;
	int day = 1;
	for (int num = 2; all<= 100;) {
		int t = all;
		num *= 2;
		all = t + num;
		day++;
	}
	cout << "平均每天花" << all * 0.8 / day << "元"<<endl;
	return 0;
}