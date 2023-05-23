#include"quadrangle.h"
#include"rhomb.h"
#include"exception.h"


rhomb::rhomb(int a, int A, int B) :quadrangle(a, a, a, a, A, B, A, B,"����") {
	

		if ((this->a > 0) && (this->b > 0) && (this->c > 0) && (this->d > 0) && (this->A > 0) && (this->B > 0) && (this->C > 0) && (this->D > 0)) {

			if (A != C) { throw Exception(name + ". �������: ���� A � C �� �����"); }
			if (B != D) { throw Exception(name + ". �������: ���� B � D �� �����"); }
			if ((a != b) || (b != c) || (c != d) || (a != d)) { throw Exception(name + ". �������: ������� �� �����"); }



			print_info();

		}


}
