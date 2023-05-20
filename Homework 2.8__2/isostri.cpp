#include"triangle.h"
#include"isostri.h"
#include"exception.h"

isostri::isostri(int a, int b, int  A, int B) :triangle(a, b, a, A, B, A, "Равнобедренный треугольник ") {
	
	try {
		if ((this->a > 0) && (this->b > 0) && (this->c > 0) && (this->A > 0) && (this->B > 0) && (this->C > 0)) {


			if (a != c) { throw Exception("стороны a и c не равны"); }
			if (A != C) { throw Exception("углы A и C не равны"); }

		

			print_info();

		}
	}

	catch (const Exception& go) {

		std::cout << "Ошибка создания фигуры " << name << ". Причина: " << go.what() << std::endl;
		std::cout << std::endl;
	}




}

