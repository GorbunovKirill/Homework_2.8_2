#include"quadrangle.h"
#include"parallelogram.h"
#include"exception.h"

parallelogram::parallelogram(int a, int b, int A, int B) :quadrangle(a, b, a, b, A, B, A, B, "Параллелограмм ") {

	try {

		if ((this->a > 0) && (this->b > 0) && (this->c > 0) && (this->d > 0) && (this->A > 0) && (this->B > 0) && (this->C > 0) && (this->D > 0)) {

			if (a != c) { throw Exception("cтороны a и c не равны"); }
			if (b != d) { throw Exception("cтороны b и d не равны"); }
			if (A != C) { throw Exception("cтороны A и C не равны"); }
			if (B != D) { throw Exception("cтороны B и D не равны"); }

		

		

			print_info();

		}
	}

	catch (const Exception& go) {

		std::cout << "Ошибка создания фигуры " << name << ". Причина: " << go.what() << std::endl;
		std::cout << std::endl;
	}







}