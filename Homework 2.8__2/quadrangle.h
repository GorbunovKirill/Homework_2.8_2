#pragma once
#include"figure.h"

class quadrangle :public figure {

public:

	quadrangle(int a, int b, int c, int d, int  A, int B, int C, int D,std::string name="Четырехугольник");
	void print_info() override;

};
