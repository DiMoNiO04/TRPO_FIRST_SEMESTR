#include<iostream>
using namespace std;

int main()
{
	double a, b, S, P;
	setlocale(LC_ALL, "Russian");
	cout << "������ a="; cin >> a;
	cout << "������ b="; cin >> b;
	P = (a + b) * 2;
	S = a * b;
	cout << "�������� = " << P << endl;
	cout << "������� = " << S<<"\n" << endl;
	for (int c = a; c > 0; c--) {
		for (int d = b; d > 0; d--) {
			cout << "!";

		}
		cout << endl;
	}

	return 0;

}