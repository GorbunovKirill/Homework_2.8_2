#include"quadrangle.h"
#include"figure.h"
#include<iostream>
#include"exception.h"


quadrangle::quadrangle(int a, int b, int c, int d, int  A, int B, int C, int D,std::string name):figure(a,b,c,d,A,B,C,D,name) {

	


	

	try {

		if ((a == 0) || (b == 0) || (c == 0) || (d == 0)) { throw Exception("меньше четырех сторон"); }
		if ((A == 0) || (B == 0) || (C == 0) || (D == 0)) { throw Exception("угол равен нулю"); }
		if ((A < 0) || (B < 0) || (C < 0) || (D == 0)) { throw Exception("угол меньше нулю"); }
		if ((a < 0) || (b < 0) || (c < 0) || (d == 0)) { throw Exception("отрицательная длина стороны"); }
		if ((A + B + C + D) != 360) { throw Exception("сумма углов не равна 360"); }

		check = "Четырехугольник";

		this->a = a; this->b = b, this->c = c; this->d = d;
		this->A = A; this->B = B, this->C = C; this->D = D;


		if (name == check) {
			print_info();
		}


	}

	catch (const Exception& ex) {

		std::cout << "Ошибка создания фигуры " << name << ". Причина: " << ex.what() << std::endl;
		std::cout << std::endl;
	}


}


void  quadrangle::print_info() {



std::cout << get_name() << std::endl;
std::cout << "Стороны: " << get_a() << " " << get_b() << " " << get_c() << " " << get_d() << std::endl;
std::cout << "Углы: " << get_A() << " " << get_B() << " " << get_C() << " " << get_D() << std::endl;
std::cout << std::endl;

};