#include<iostream>
using namespace std;
int main() {
	double a, x,t;
	cin >> a;
	if (a < 0)
	{
		a = -a;
	}
	t = a;
	x = (t + a / t) / 2;
	while ((x-t>1e-5)||(x-t<-1e-5)) {
		t = x;
		x = (t + a / t) / 2;
	}
	cout << "ƽ����Ϊ" << x << endl;
	return 0;
}