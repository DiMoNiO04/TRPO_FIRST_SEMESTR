#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "������� ����� ����������� ����� \n"; cin >> a;
	if (999>= a >= 100) {
		if (a % 2 == 0) {
			cout << "������";
		}
		else {
			cout << "��������";
		}
	}
	else {
		cout << "Error";
	}
}