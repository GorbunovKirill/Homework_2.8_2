#include"triangle.h"
#include"right_tri.h"
#include "exception.h"


right_tri::right_tri(int a, int b, int c, int  A, int B) : triangle(a,b,c,A,B,90,"Прямоугольный треугольник") {

	
		if ((this->a > 0) && (this->b > 0) && (this->c > 0) && (this->A > 0) && (this->B > 0) && (this->C > 0)) {

		
	
		if (C != 90) { throw Exception(name + ". Причина: угол С не равен 90 градусов"); }

	
		
			
		print_info();

		}



	}




