#include <iostream>
#include "Complex.h"
#include "ComplexVector.h"
#include "conio.h"

int main() {

	Complex num0;
	Complex num1(2, 8);
	Complex num2(4, 2);
	Complex num3(10.4, 2.8);

	num1.add(num2);

	ComplexVector vector1;
	ComplexVector vector2;
	vector1.rand_init();
	vector2.rand_init();

	vector1.add(vector2);

	_getch();
	return 0;
}