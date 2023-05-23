#include"quadrangle.h"
#include"parallelogram.h"
#include"exception.h"

parallelogram::parallelogram(int a, int b, int A, int B) :quadrangle(a, b, a, b, A, B, A, B, "�������������� ") {

	
		if ((this->a > 0) && (this->b > 0) && (this->c > 0) && (this->d > 0) && (this->A > 0) && (this->B > 0) && (this->C > 0) && (this->D > 0)) {

			if (a != c) { throw Exception(name + ". �������: c������ a � c �� �����"); }
			if (b != d) { throw Exception(name + ". �������: c������ b � d �� �����"); }
			if (A != C) { throw Exception(name + ". �������: c������ A � C �� �����"); }
			if (B != D) { throw Exception(name + ". �������: c������ B � D �� �����"); }		

			print_info();

		}
	

}