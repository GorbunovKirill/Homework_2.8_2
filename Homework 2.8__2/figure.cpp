#include "figure.h"
#include <iostream>
#include"exception.h"




std::string figure::get_name() 
{
	return name;
}



int figure::get_a() {
	return a;
}
int figure::get_b() {
	return b;
}
int  figure::get_c() {
	return c;
}
int  figure::get_d() {
	return d;
}
int figure::get_A() {
	return A;
}
int figure::get_B() {
	return B;
}
int figure::get_C() {
	return C;
}
int figure::get_D() {
	return D;
}

figure::figure(int a=0, int b = 0, int c = 0, int d = 0, int A = 0, int B = 0, int C = 0, int D = 0, std::string name = "Фигура") 
{
	this->name = name;
}

void  figure::print_info() {
		
	std::cout << get_name() << std::endl;
	
};


