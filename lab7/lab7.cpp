#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

class Human {
protected:
	string surname, name, midname;
	int age;
public:
	Human() {
	}
	virtual void print() = 0;
	~Human() {
	}
};

class student :public Human {
private:
	bool on_lesson;
public:
	student(string surname, string name, string midname, int age, bool on_lesson) :Human() {
		this->surname = surname;
		this->name = name;
		this->midname = midname;
		this->age = age;
		this->on_lesson = on_lesson;
	}
	void print() {
		cout << "Фамилия: " << surname << endl;
		cout << "Имя: " << name << endl;
		cout << "Отчество: " << midname << endl;
		cout << "Возраст: " << age << endl;
		cout << "Посещение: (1 = да, 0 - нет): " << on_lesson << endl;
	}
	~student() {
		cout << "class Student desctructed" << endl;
	}
};
class boss :public Human {
private:
	int number_on_workes;
public:
	boss(string surname, string name, string midname, int age, int number_on_workes) :Human() {
		this->surname = surname;
		this->name = name;
		this->midname = midname;
		this->age = age;
		this->number_on_workes = number_on_workes;
	}
	void print() {
		
		cout << "Фамилия: " << surname << endl;
		cout << "Имя: " << name << endl;
		cout << "Отчество: " << midname << endl;
		cout << "Возраст: " << age << endl;
		cout << "ID: " << number_on_workes << endl;
	}
	~boss() {
		cout << "class boss destructed" << endl;
	}
};
int main()
{
	setlocale(0, "rus");
	cout << "Class Student: " << endl;
	student Ivan = { "Sheguta","Ivan","Sergeevich",18,true };
	Ivan.print();
	cout << "\n\n";
	cout << "Class Boss: " << endl;
	boss karpov = { "Smirnov","Sergey","Sergeevich",40,1337 };
	karpov.print();
	_getch();
}
