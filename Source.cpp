#include <iostream>
#include "Complex.h"
#include "ComplexVector.h"
#include "conio.h"

int main() {

	Complex num0;
	Complex num1(2, 8);
	Complex num2(4, 2);
	Complex num3(10.4, 2.8);

	num1 = num1 + num2;
	num1.get_num();
	num1 = num1 + num3;
	num1.get_num();

	ComplexVector vector1;
	ComplexVector vector2;
	vector1.rand_init();
	vector2.rand_init();

	std::cout << "first vector: "; vector1.print_vector();
	std::cout << "second vector: "; vector2.print_vector();

	vector1.add(vector2);
	std::cout << "vector sum: "; vector1.print_vector();

	_getch();
	return 0;
}