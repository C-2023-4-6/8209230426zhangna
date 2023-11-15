#include<iostream>
using namespace std;
int main()
{
	//Int i = k + 1; 未定义变量k，int的i大写了
	int k = 0, i = k + 1;
	cout << i++ << endl;
	//int i = 1; 重复定义变量i
	cout << i++ << endl;
	cout << "Welcome to C++" << endl;
	return 0;
}
