#include"triangle.h"
#include"equil_tri.h"
#include"exception.h"


equil_tri::equil_tri(int a) :triangle(a, a, a, 60, 60, 60, "�������������� ����������� ") {
	

		if ((this->a > 0) && (this->b > 0) && (this->c > 0) && (this->A > 0) && (this->B > 0) && (this->C > 0)) {
			

			if ((a != b) || (b != c)|| ( a!=c )) { throw Exception(name + ". �������: ������� �� �����"); }
			if ((A != 60) || (B != 60) || (C != 60)) { throw Exception(name + ". �������: ���� �� ����� 60"); }

		

			print_info();

		}




}

