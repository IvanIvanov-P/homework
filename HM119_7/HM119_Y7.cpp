#include "../Hello, world!/std_lib_facilities.h"

int main()
{
	setlocale(LC_ALL, "Rus");

	string a = "", b = "", c = "";

	while (true)
	{
		cout << "Введите слова" << endl;
		cin >> a >>  b >> c;

		// так как в таблице кодировки unicode знаки идут по возрастанию,
		// то поменяем знаки операторов в выражениях
		if (a <= b and b <= c and a <= c)
			cout << a << " " << b << " " << c << endl;
		else if (a <= b and b >= c and a <= c)
			cout << a << " " << c << " " << b << endl;
		else if (b <= a and a <= c and b <= c)
			cout << b << " " << a << " " << c << endl;
		else if (b <= a and a >= c and b <= c)
			cout << b << " " << c << " " << a << endl;
		else if (c <= a and a <= b and c <= b)
			cout << c << " " << a << " " << b << endl;
		else
			cout << c << " " << b << " " << a << endl;
	}
}