#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");
	string path = "myFile.txt";
	/*
	//������ � ����

	ofstream fout;
	fout.open(str);
	if (!fout.is_open()) {
		cout << "������ �������� �����!";
	}
	else {
		for (int i = 0; i < 5; i++) {
			cout << "������� ����� !" << endl;
			int number;
			cin >> number;
			fout << number;
			fout << "\n";
		}
	}
	fout.close();


	//���������� � �����

	ifstream fin;
	fin.open(path);
	if (!fin.is_open()) {
		cout << "������ �������� �����";
	}
	else {
		cout << "���� ������"<<endl;
		string str;
		
		while (!fin.eof()) {
			str = "";
			getline(fin, str);
			cout << str << endl;
		}
	}
	fin.close();
	return 0;

	setlocale(LC_ALL, "RUS");
	string path = "myFile.txt";
	fstream fs;
	fs.open(path, fstream::in | fstream::out | fstream::app);

	if (!fs.is_open()) {
		cout << "������ �������� �����!" << endl;
	}
	else {
		string msg;
		int value;
		cout << "���� ������!" << endl;
		cout << "������� 1 ��� ������ ��������� � ����:" << endl;
		cout << "������� 2 ��� ���������� ���� ��������� �� �����:" << endl;
		cin >> value;

		if (value == 1) {
			cout << "������� ���� ���������!" << endl;
			cin >> msg;
			fs << msg << "\n";
		}

		if (value == 2) {
			while (!fs.eof()) {
				msg = "";
				fs >> msg;
				cout << msg << endl;
			}

		}
	}
	fs.close();
	return 0;
	*/
}