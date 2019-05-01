#include <iostream>
#include <string>
#include <vector>
#include <conio.h>
using namespace std;

class Vector  // Объявление класса
{
public:
	double x;
	double y;
	Vector() {}
	Vector(double x, double y)
	{
		this->x = x;
		this->y = y;
	}

};
double length(int x, int y)  // Функция, возвращающая длину вектора
{
	return sqrt(pow(x, 2) + pow(y,2));
}
int main()
{
	vector<string> vectx; // Объявление вектора 
	string buffx = ""; // Обьявление пустой строки, в которую будут заноситься координаты
	cout << "Input amount of vectors: ";
	getline(cin, buffx); // Ввод желаемого количества векторов
	vectx.push_back(buffx);
	int n = stoi(vectx[0]); // Считывание цифры из строки и перевод ее в целочисленный тип данных
	for (int i = 0; i < n; i++) // Цикл ввода координат векторов
	{
		cout << "Vector#" << i + 1 <<": " << endl;
		cout << "	Input x: ";
		getline(cin, buffx);
		vectx.push_back(buffx);  // Добавление элемента в конец вектора
		cout << "	Input y: ";
		getline(cin, buffx);
		cout << endl;
		vectx.push_back(buffx);
	}

	int num = 1;
	for (int i = 2; i < n * 2 + 1; i = i + 2) // Цикл вывода координат векторов 
	{
		cout << "Vector #" << num << " = (" << vectx[i-1] << ";" << vectx[i] << ")" << endl;
		num++;
	}
	cout << "--------------------------------" << endl;
	double max = 0;
	int count; // Здесь будет храниться порядковый номер вектора с максимальной длиной
	for (int i = 2; i < n * 2 + 1; i = i + 2) // Цикл подсчёта длины каждого вектора
	{
		int x = stoi(vectx[i-1]);
		int y = stoi(vectx[i]);
		if (length(x, y) > max) // Нахождение среди них максимально длинного вектора
		{
			max = length(x, y);
			count = i / 2;

		}
	}
	cout << "Vector #" << count << " has max length = " << max << endl; // Вывод 
	_getch();
	return 0;
}
