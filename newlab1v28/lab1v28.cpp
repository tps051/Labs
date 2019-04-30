#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <conio.h>
using namespace std;

class Vector {
public:
	double x;
	double y;
	Vector () {}
	Vector(double x, double y)
	{
		this->x = x;
		this->y = y;
	}

};
double length(int x, int y) 
{
	return sqrt(pow(x, 2) + pow(y, 2));
}
int main()
{
	vector<string> vectx;
	string buffx = "";
	int n;
	cout << "Amount of vectors: ";
	cin >> n;
	getline(cin, buffx);
	vectx.push_back(buffx);
	cout << "Input random: ";
	getline(cin, buffx);
	vectx.push_back(buffx);
	for (int i = 0; i < n; i++) // Цикл ввода координат векторов
	{
		cout << "Vector#" << i + 1 << endl;
		cout << "	Input x: ";
		getline(cin, buffx); 
			vectx.push_back(buffx);  // Добавление элемента в конец вектора
		cout << "	Input y: ";
		getline(cin, buffx);
			vectx.push_back(buffx);
	}

	unsigned int vector_size = buffx.size();
	int num = 1;
	for (int i = 2; i < n*2+1; i = i + 2) {
		cout << "Vector #" << num << " = (" << vectx[i] << ";" << vectx[i+1] << ")"<< endl;
		num++;
	}
	cout << "--------------------------------" << endl;
	double max = 0;
	int count;
	char a[100];
	for (int i = 2; i < n * 2 + 1; i = i + 2)
	{
		int x = stoi(vectx[i]);
		int y = stoi(vectx[i + 1]);
		if (length(x, y) > max)
		{
			max = length(x, y);
			count = i/2;
			
		}
	}
	cout << "Vector #" << count << " has max length = " << max << endl;
	_getch();
	return 0;
}
