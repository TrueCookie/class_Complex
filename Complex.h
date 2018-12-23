#pragma once
#include <iostream>

class Complex
{
private:
	double real;
	double image;
public:
	Complex() {
		real = 0.0; image = 0.0;
	}
	Complex(double r, double i) : real(r), image(i) {}

	Complex(const Complex & copy) {
		real = copy.real;
		image = copy.image;
	}

	void set_num(double r, double i);
	void get_num();
	void add(Complex num);
	void diff(Complex num);
	void mult(Complex num);
	void div(Complex num);
	double abs();

	Complex operator+(Complex const& num);
};

