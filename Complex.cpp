#include "Complex.h"
#include <iostream>

void Complex::set_num(int r, int i) {
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

/*Complex operator+(Complex const& num1,
	Complex const& num2) {
	Complex tmp;
	tmp.real = num1.real + num2.real;
	tmp.image = num1.image + num2.image;
	return tmp;
}*/
