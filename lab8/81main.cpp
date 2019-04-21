#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include "main1.cpp"

using namespace std;

int main(int argc, char const *argv[])
{
    vector<Student> vec;
    int n;
    cout << "Amount of students: ";
    cin >> n;
    for (int i = 0; i < n ; i++) {
        Student* student;
        cout << "Input name, surname and group: ";
        cin >> student->name >> student->family >> student->group;
        cout << "Input age: ";
        cin >> student->age;
        vec.push_back(*student);
    };
    return 0;
}