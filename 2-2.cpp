#include<iostream>
using namespace std;
int main() {
	double x;
	cin >> x;
	if (x > 0 && x < 1)
		cout<<3 - 2 * x;
	else if (x >= 1 && x < 5)
		cout<<2 / (4 * x) + 1;
	else if (x >= 5 && x < 10)
		cout<<x * x;
	else
		cout << "ÇëÖØÊä" << endl;
	return 0;
}