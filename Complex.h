#pragma once
#include <iostream>
//#include "ComplexVector.h"
class Complex
{
private:
	double real;
	double image;
public:
	Complex() {
		real = 0.0; image = 0.0;
	}
	Complex(int r, int i) : real(r), image(i) {}

	Complex(const Complex & copy) {
		real = copy.real;
		image = copy.image;
	}

	void set_num(int r, int i);
	void get_num();
	void add(Complex num);
	void diff(Complex num);
	void mult(Complex num);
	void div(Complex num);
	double abs();
	//void ComplexVector::rand_init();

	/*Complex operator+(Complex const& num1,
		Complex const& num2) {
		Complex tmp;
		tmp.real = num1.real + num2.real;
		tmp.image = num1.image + num2.image;
		return tmp;
	}*/
};

