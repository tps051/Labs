#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <conio.h>
#include "main1.cpp"
using namespace std;
int main(int argc, char const *argv[])
{
    vector<Student> vec;
    int n;
    cout << "Amount of students: ";
    cin >> n;
	string name, family, group;
	int age, number = 0;
    for (int i = 0; i < n ; i++) {
		Student **s = new Student*[number];
        cout << "Input name: ";
		cin >> name;
		cout << "Input family: ";
		cin >> family;
		cout << "Input group: ";
		cin	>> group;
        cout << "Input age: ";
        cin >> age;
		s[number] = new Student(name, family, group, age);
		s[number]->show();
        vec.push_back(*s[number]);
		number++;
    };
	_getch();
    return 0;
}