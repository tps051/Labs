#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES    //ИЗ лаб-ой 5.1
#include <cmath>
#include <iostream>
using namespace std;

class Complex {
private:
    float re;
    float im;
public:
    Complex (){}
    Complex ( float RE, float IM){
        this->re = RE;
        this->im = IM;
    }

    Complex& operator= (Complex& a) {
        this->im = a.im;
        this->re = a.re;
        return *this;
    }

    Complex& operator++ () {
        this->re += 1;
        this->im += 1;
        return *this;
    }

    Complex& operator-- () {
        this->re -= 1;
        this->im -= 1;
        return *this;
    }

    friend bool operator==(const Complex& a, const Complex& b) {
        bool real = a.re == b.re;
        bool image = a.im == b.im;
        return real && image;
    }

    friend ostream& operator<<(ostream &f, const Complex& a) {
        f  << a.re << " + i * " << a.im << endl;
        return f;
    }

    friend istream& operator>>(istream &f, const Complex &a) {
        f >> a.re >> a.im;
        return f;
    }

    float mod() {
        return sqrt(pow(re,2) + pow(im,2));
    }

    float arg() {
        float itog;
        if (re > 0)  itog = atan(im / re);
        else if (re == 0) {
            if (re > 0)  itog = M_PI / 2;
            else itog = M_PI / 2;
        }
        else {
            if (im >= 0)  itog = M_PI + atan(im / re);
            else  itog = -M_PI + atan(im / re);
        }
        return itog;
    }

    void show() {
        cout << " MOD = " << this->mod() << " ARG =" << this->arg() << endl;
    }
};