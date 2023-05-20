#include"quadrangle.h"
#include"square.h"
#include"exception.h"

square::square(int a) :quadrangle(a, a, a, a, 90, 90, 90, 90, "Квадрат ") {
	
	try {

		if ((this->a > 0) && (this->b > 0) && (this->c > 0) && (this->d > 0) && (this->A > 0) && (this->B > 0) && (this->C > 0) && (this->D > 0)) {

			if ((a != b) || (b != c) || (c != d) || (a != d)) { throw Exception("стороны не равны"); }
			if ((A != 90) || (B != 90) || (C != 90) || (D != 90)) { throw Exception("углы не равны 90"); }


			print_info();

		}
	}

	catch (const Exception& go) {

		std::cout << "Ошибка создания фигуры " << name << ". Причина: " << go.what() << std::endl;
		std::cout << std::endl;
	}


}
