#include "../Hello, world!/std_lib_facilities.h"

int main()
{
	setlocale(LC_ALL, "Rus");
    double a = 0;
    string unit = "";

    while (cin >> a >> unit)
    {
        cout << a << unit;
    }
}