#include<iostream>
using namespace std;
int main() {
	cout << "请输入一行字符" << endl;
	char ch;
	int en = 0, num = 0, blank = 0, other = 0;
	while(1){
		ch = cin.get();
		if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
			en++;
		else if (ch >= 48 && ch <= 57)
			num++;
		else if (ch == 32)
			blank++;
		else if (ch == '\n')
			break;
		else
			other++;
	}
	cout << "一共有" << en <<"个英文字母" <<endl;
	cout << "一共有" << num << "个数字字符" << endl;
	cout << "一共有" << blank << "个空格" << endl;
	cout << "一共有" << other << "个其他字符" << endl;
	return 0;
}