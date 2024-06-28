#include <iostream>
#include "Fraction.hpp"



int main() {
	setlocale(LC_ALL, "Russian");
	Fraction f1(8, 4, false); 
	Fraction f2(4, 6, true); 
	

	std::cout << "Дробь f1 = ";
	f1.print();
	std::cout << "Дробь f2 = ";
	f2.print();
	

	Fraction sum = f1.sum(f2);
	std::cout << "Сумма f1 и f2: ";
	sum.print();

	Fraction diff = f1.subtraction(f2);
	std::cout << "Разность f1 и f2: ";
	diff.print(); 

	


	
	return 0;
	
}