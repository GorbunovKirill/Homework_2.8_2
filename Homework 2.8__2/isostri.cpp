#include"triangle.h"
#include"isostri.h"
#include"exception.h"

isostri::isostri(int a, int b, int  A, int B) :triangle(a, b, a, A, B, A, "�������������� ����������� ") {
	
	
		if ((this->a > 0) && (this->b > 0) && (this->c > 0) && (this->A > 0) && (this->B > 0) && (this->C > 0)) {


			if (a != c) { throw Exception(name + ". �������: ������� a � c �� �����"); }
			if (A != C) { throw Exception(name + ". �������: ���� A � C �� �����"); }

		

			print_info();

		}



}

