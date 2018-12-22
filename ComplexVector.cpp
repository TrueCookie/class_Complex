#include "ComplexVector.h"
//#include "Complex.h"
#include <ctime>

void ComplexVector::add(ComplexVector other) {
	size_t other_size = other.size;
	Complex* sum_arr = new Complex[size+other_size];
	for (int i = 0; i < size; ++i) {
		sum_arr[i] = arr[i];
		sum_arr[i+size] = other.arr[i];
	}
}

void ComplexVector::rand_init() {
	srand(time(NULL));
	size_t size = rand()%10;
	Complex* new_arr = new Complex[size];
	for (int i = 0; i < size; ++i) {
		Complex(rand() % 10, rand() % 10);
	}
}
