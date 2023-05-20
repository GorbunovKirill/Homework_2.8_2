#include"quadrangle.h"
#include"rectangle.h"
#include"exception.h"

rectangle::rectangle(int a, int b) :quadrangle(a, b, a, b, 90, 90, 90, 90, "������������� ") {


	try {

		if ((this->a > 0) && (this->b > 0) && (this->c > 0) && (this->d > 0) && (this->A > 0) && (this->B > 0) && (this->C > 0) && (this->D > 0)) {

			if (a != c) { throw Exception("c������ a � c �� �����"); }
			if (b != d) { throw Exception("c������ b � d �� �����"); }
			if ((A != 90) || (B != 90) || (C != 90)||(D!=90)) { throw Exception("���� �� ����� 90"); }

		

			print_info();

		}
	}

	catch (const Exception& go) {

		std::cout << "������ �������� ������ " << name << ". �������: " << go.what() << std::endl;
		std::cout << std::endl;
	}



}





