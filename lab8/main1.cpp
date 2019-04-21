#define _CRT_SECURE_NO_WARNINGS
#include <iostream> // Из лаб-ой 6.1
#include <string>
using namespace std;


class Student {
    public:
        string name;
        string family;
        string group;
        int age;
        Student(){}
        Student(string name, string family, string group, int age) {
            this->name = name;
            this->family = family;
            this->group = group;
            this->age = age;
        }
};

class STAROSTA: public Student {
    public:
        int reiting;
        string phone;
        STAROSTA(string name, string family, string group, int age,int reiting, string phone) : Student(name,family,group,age) {
            this->reiting = reiting;
            this->phone = phone;
        }
};