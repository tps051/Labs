#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
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
		void show()
		{
			cout << name << " " << family << ", group " << group << ", age: " << age << endl;
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