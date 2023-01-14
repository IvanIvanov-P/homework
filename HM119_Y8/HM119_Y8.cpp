#include "../Hello, world!/std_lib_facilities.h"

double x = 0, summ = 0;

void sq()
{
	int a = 3.9, b = 2;
	std::cout << a / b;
};


int main()
{
	setlocale(LC_ALL, "Rus");

	sq();
}