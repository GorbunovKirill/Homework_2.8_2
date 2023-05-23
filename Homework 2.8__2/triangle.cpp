#include "figure.h"
#include <iostream>
#include"triangle.h"
#include "exception.h"

triangle::triangle(int a, int b, int c, int  A, int B, int C,std::string name) :figure(a,b,c,d,A,B,C,D, name){

		
		if ((a == 0) || (b == 0) || (c == 0)) { throw Exception(name + ". Причина: меньше четырех сторон"); }
		if ((A == 0) || (B == 0) || (C == 0)) { throw Exception(name + ". Причина: угол равен нулю"); }
		if ((A < 0) || (B < 0) || (C < 0)) { throw Exception(name + ". Причина: угол меньше нуля"); }
		if ((a < 0) || (b < 0) || (c < 0)) { throw Exception(name + ". Причина: отрицательная длина стороны"); }
		if ((A + B + C) != 180) { throw Exception(name+". Причина: сумма углов не равна 180"); }

		check = "Треугольник";

	this->a = a; this->b = b, this->c = c;
	this->A = A; this->B = B, this->C = C;
	
	if (name == check) {

		 print_info();

	}


}




void triangle::print_info() {


	std::cout << get_name() << std::endl;
	std::cout << "Стороны: " << get_a() << " " << get_b() << " " << get_c() << std::endl;
	std::cout << "Углы: " << get_A() << " " << get_B() << " " << get_C() << std::endl;
	std::cout << std::endl;

	

	
}
