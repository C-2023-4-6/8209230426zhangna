#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	cout << "������һ�������¶�" << endl;
	double fah;
	cin >> fah;
	cout << "�����¶�Ϊ��" << endl;
	cout <<fixed<< setprecision(2) << 5 * (fah - 32) / 9 << endl;
	return 0;
}