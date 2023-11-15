#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	cout << "请输入一个华氏温度" << endl;
	double fah;
	cin >> fah;
	cout << "摄氏温度为：" << endl;
	cout <<fixed<< setprecision(2) << 5 * (fah - 32) / 9 << endl;
	return 0;
}