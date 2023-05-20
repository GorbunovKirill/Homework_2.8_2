#include"quadrangle.h"
#include"parallelogram.h"
#include"exception.h"

parallelogram::parallelogram(int a, int b, int A, int B) :quadrangle(a, b, a, b, A, B, A, B, "�������������� ") {

	try {

		if ((this->a > 0) && (this->b > 0) && (this->c > 0) && (this->d > 0) && (this->A > 0) && (this->B > 0) && (this->C > 0) && (this->D > 0)) {

			if (a != c) { throw Exception("c������ a � c �� �����"); }
			if (b != d) { throw Exception("c������ b � d �� �����"); }
			if (A != C) { throw Exception("c������ A � C �� �����"); }
			if (B != D) { throw Exception("c������ B � D �� �����"); }

		

		

			print_info();

		}
	}

	catch (const Exception& go) {

		std::cout << "������ �������� ������ " << name << ". �������: " << go.what() << std::endl;
		std::cout << std::endl;
	}







}