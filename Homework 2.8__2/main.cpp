#include "figure.h"
#include <iostream>
#include <windows.h>
#include"triangle.h"
#include"quadrangle.h"
#include"right_tri.h"
#include"isostri.h"
#include"equil_tri.h"
#include"rectangle.h"
#include"square.h"
#include "parallelogram.h"'
#include"rhomb.h"
#include"exception.h"

int main() {
	setlocale(LC_ALL, "Russian");


		triangle first(45, 33, 40, 40, 80, 60);

		equil_tri second(40);

		right_tri third(40, 55, 34, 80, 80);

		isostri fourth(30, 40, 70, 40);

		quadrangle fith(12, 34, 56, 32, 90, 70, 78, 110);

		parallelogram sixth(20, 30, 80,100);

		rectangle seventh(45, 34);

		rhomb eigth(32, 60, 100);

		square ninth(20);

	

	return 0;
}