#include "ComplexVector.h"
#include <ctime>

 int max(int frst, int scd) {
	 return frst > scd ? frst : scd;
}

 int min(int frst, int scd) {
	 return frst < scd ? frst : scd;
 }

void ComplexVector::add(ComplexVector other) {
	Complex* sum_arr = new Complex[size+other.size];
	for (int i = 0; i < size; ++i) {
		sum_arr[i] = arr[i];
	}
	for (int i = 0; i < other.size; ++i) {
		sum_arr[i + size] = other.arr[i];
	}
	delete[] arr;
	arr = sum_arr;
	size += other.size;
}

void ComplexVector::rand_init() {
	srand(static_cast <unsigned> (time(0)));
	size = rand() % 5 + 1;
	Complex* new_arr = new Complex[size];
	for (int i = 0; i < size; ++i) {
		double re = static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / 10));
		double im = static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / 10));
		new_arr[i] = Complex(re, im);
	}
	arr = new_arr;
}

void ComplexVector::print_vector() {
	for (int i = 0; i < size; ++i) {
		arr[i].get_num();
		std::cout << " ";
	}
}

void ComplexVector::sum(ComplexVector other) {
	size_t max_size = max(size, other.size);
	Complex* sum_arr = new Complex[max_size];
	if (max_size == size) {
		for (int i = 0; i < size; ++i) {
			sum_arr[i] = arr[i];
		}
		for (int i = 0; i < other.size; ++i) {
			sum_arr[i] = sum_arr[i] + other.arr[i];
		}
	}else {
		for (int i = 0; i < other.size; ++i) {
			sum_arr[i] = other.arr[i];
		}
		for (int i = 0; i < size; ++i) {
			sum_arr[i] = sum_arr[i] + other.arr[i];
		}
	}
	delete[] arr;
	arr = sum_arr;
	size = max_size;
}