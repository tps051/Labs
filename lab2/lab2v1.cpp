#include <iostream>
#include <cmath>

using namespace std;
int summ(int a, int b);
int razn(int a, int b);
int proiz(int a, int b);
int chast(int a, int b);

int main() {
	int(*func)(int, int);
	int a, b;
	cout << "������� ��� �����: ";
	cin >> a >> b;
	int answer;
	cout << "�������� ��������: " << '\n' << "1) �������� " << '\n' << "2) ���������" << '\n' << "3) ��������� " << '\n' << "4) ������� " << endl;
	cin >> answer;
	switch (answer)
	{
	case 1:
		func = summ;
		break;
	case 2:
		func = razn;
		break;
	case 3:
		func = proiz;
		break;
	case 4:
		func = chast;
		break;
	}
	int result = func(a, b);
	if (isnan(result)) {
		cout << "������� �� ����!" << endl;
	}
	else {
		cout << "�����: " << result << endl;
	}
	func = NULL;
	return 0;
}

int summ(int a, int b) {
	return a + b;
};

int razn(int a, int b) {
	return a - b;
};

int proiz(int a, int b) {
	return a * b;
};

int chast(int a, int b) {
	return (float)a / (float)b;
};