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
	size = rand()%10;
	Complex* new_arr = new Complex[size];
	for (int i = 0; i < size; ++i) {
		new_arr[i] = Complex(1, rand() % 10);
	}
	arr = new_arr;
}

void ComplexVector::print_vector() {
	for (int i = 0; i < size; ++i) {
		arr[i].get_num();
		std::cout << " ";
	}
}