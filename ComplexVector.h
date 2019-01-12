#pragma once
#include "Complex.h"

//class Complex;

class ComplexVector {
private:
	int size;
	Complex* arr;
public:
	ComplexVector() {
		size = 0;
		arr = new Complex[size];
	}
	
	void add(ComplexVector other);
	void rand_init();
	void print_vector();

	void sum(ComplexVector other);
};
