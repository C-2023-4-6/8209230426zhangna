#include<iostream>
using namespace std;
int main() {
	const double pi = 3.14;
	double r, h,v;
	cout <<"������Բ׶�ĵ���뾶" << endl;
	cin >> r;
	cout << "r=" << r << endl;
	cout <<"������Բ׶�ĸ�" << endl;
	cin >> h;
	cout << "h=" << h<< endl;
	v = (1.0 / 3.0) * pi * r * r * h;
	cout << "v="<<v<<endl;
	return 0;
}