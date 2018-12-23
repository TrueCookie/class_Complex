#include "Complex.h"
#include <iostream>

Complex Complex::operator+(Complex const& num) {
	Complex tmp;
	tmp.real = real + num.real;
	tmp.image = image + num.image;
	return tmp;
}

void Complex::set_num(double r, double i) {
	real = r;
	image = i;
}

void Complex::get_num() {
	std::cout << real << "+" << image << "i" << std::endl;
}

void Complex::add(Complex num) {
	this->real += num.real;
	this->image += num.image;
}

void Complex::diff(Complex num) {
	this->real -= num.real;
	this->image -= num.image;
}

void Complex::mult(Complex num) {
	this->real *= num.real;
	this->image *= num.image;
}

void Complex::div(Complex num) {
	this->real /= num.real;
	this->image /= num.image;
}

double Complex::abs() {
	return sqrt(pow(real, 2) + pow(image, 2));
}


