#include<iostream>
using namespace std;
int main() {
	cout << "������һ���ַ�" << endl;
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
	cout << "һ����" << en <<"��Ӣ����ĸ" <<endl;
	cout << "һ����" << num << "�������ַ�" << endl;
	cout << "һ����" << blank << "���ո�" << endl;
	cout << "һ����" << other << "�������ַ�" << endl;
	return 0;
}