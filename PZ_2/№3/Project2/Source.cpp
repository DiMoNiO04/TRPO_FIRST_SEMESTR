#include<iostream>
#include<math.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	int a, b, i;

	cout << "������� ������ �����"; cin >> a;
	cout << "������� ������ �����"; cin >> b;
	cout << endl;


	for (i = 2; i < a; i++) {
		if (a % i == 0) {
			cout << a << "�� ������� ����� " << endl;
			break;
		}
		else  if (i == a - 1) {
			cout << a << "������� ����� " << endl;
			break;
		}
	}

	for (i = 2; i < b; i++) {
		if (b % i == 0) {
			cout << b << "�� ������� ����� " << endl;
			break;
		}
		else  if (i == b - 1) {
			cout << b << "������� ����� " << endl;
			break;
		}
	}
	cout << endl;

	for (i = min(a, b); i >= 1; i--) {
		if (a % i == 0 && b % i == 0) {
			cout << "��� ����� " << i<<endl;
			break;
		}
	}
	cout << endl;
	system("pause"); 
}
