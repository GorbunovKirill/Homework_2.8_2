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


	try {

		triangle first(45, 33, 40, 40, 80, 60);
	}
	catch (const Exception& ex) {

		std::cout << "Ошибка создания фигуры " << ex.what() << std::endl;
		std::cout << std::endl;
	}
	try {
		equil_tri second(40);
	}
	catch (const Exception& ex) {

		std::cout << "Ошибка создания фигуры " << ex.what() << std::endl;
		std::cout << std::endl;
	}
	try {
		right_tri third(40, 55, 34, 80, 80);
	}
	catch (const Exception& ex) {

		std::cout << "Ошибка создания фигуры " << ex.what() << std::endl;
		std::cout << std::endl;
	}
	try {
		isostri fourth(30, 40, 70, 40);
	}
	catch (const Exception& ex) {

		std::cout << "Ошибка создания фигуры " << ex.what() << std::endl;
		std::cout << std::endl;
	}
	try {
		quadrangle fith(12, 34, 56, 32, 90, 70, 78, 110);
	}
	catch (const Exception& ex) {

		std::cout << "Ошибка создания фигуры " << ex.what() << std::endl;
		std::cout << std::endl;
	}
	try {
		parallelogram sixth(20, 30, 80,100);
	}
	catch (const Exception& ex) {

		std::cout << "Ошибка создания фигуры " << ex.what() << std::endl;
		std::cout << std::endl;
	}
	try {
		rectangle seventh(45, 34);
	}
	catch (const Exception& ex) {

		std::cout << "Ошибка создания фигуры " << ex.what() << std::endl;
		std::cout << std::endl;
	}
	try {
		rhomb eigth(32, 60, 100);
	}
	catch (const Exception& ex) {

		std::cout << "Ошибка создания фигуры " << ex.what() << std::endl;
		std::cout << std::endl;
	}
	try {
		square ninth(20);

	}
	catch (const Exception& ex) {

		std::cout << "Ошибка создания фигуры " << ex.what() << std::endl;
		std::cout << std::endl;
	}




	return 0;
}