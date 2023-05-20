#pragma once
#include <string>

class figure {
protected:

	
	int a;
	int b;
	int c;
	int d;
	int A;
	int B;
	int C;
	int D;
	std::string name;
	
	std::string check;

	
	std::string get_name() ;


	int get_a();
	int get_b();
	int get_c();
	int get_d();
	int get_A();
	int get_B();
	int get_C();
	int get_D();


	virtual void print_info();

public:

	figure(int a,int b,int c, int d,int A,int B,int C,int D,std::string name);
	
	
};






