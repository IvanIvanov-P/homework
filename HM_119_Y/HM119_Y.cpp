#include "../Hello, world!/std_lib_facilities.h"
#include <functional>

void task8()
{
	int n = 0;

	setlocale(LC_ALL, "Rus");

	while (1) {
		cout << "Введите число, чтобы проверить его на чётность или нечётность" << endl;
		cin >> n;
		if (n % 2 == 1)
			cout << "Число " << n << " является нечётным" << endl;
		else
			cout << "Число " << n << " является чётным" << endl;;
	}
}

void task9()
{
	string n = "";

	setlocale(LC_ALL, "Rus");

	while (1) {
		cout << "Введите слово, чтобы получить число" << endl;
		cin >> n;

		if (n == "Zero")
			cout << "0" << endl;
		else if (n == "One")
			cout << "1" << endl;
		else if (n == "Two")
			cout << "2" << endl;
		else if (n == "Three")
			cout << "3" << endl;
		else if (n == "Four")
			cout << "4" << endl;
		else
			cout << "Я не знаю такого числа!" << endl;
	}
}


void task10()
{
	string oper = "";
	double op1 = 0, op2 = 0, solv = 0;

	setlocale(LC_ALL, "Rus");

	while (1) {
		cout << "Введите оператор, а затем два операнда" << endl;	
		cin >> oper >> op1 >> op2;

		if (oper == "+" or oper == "plus")							
			cout << op1 + op2 << endl;										
		else if (oper == "-" or oper == "minus")					
			cout << op1 - op2 << endl;										
		else if (oper == "*" or oper == "multi")					
			cout << op1 * op2 << endl;										
		else if (oper == "/" or oper == "div")						
			cout << op1 / 2 << endl;										
	}
}


void task11()
{
	double one = 0, five = 0, ten = 0, twentyfive = 0, fifty = 0, summ = 0;

	setlocale(LC_ALL, "Rus");

	while (1) {
		cout << "Сколько у вас одноцентовых монет?" << endl;
		cin >> one;
		summ += (one * 1);

		cout << "Сколько у вас пятицентовых монет?" << endl;
		cin >> five;
		summ += (five * 5);

		cout << "Сколько у вас десятицентовых монет?" << endl;
		cin >> ten;
		summ += (ten * 10);

		cout << "Сколько у вас двадцатипятицентовых монет?" << endl;
		cin >> twentyfive;
		summ += (twentyfive * 25);

		cout << "Сколько у вас пятидесятицентовых монет?" << endl;
		cin >> fifty;
		summ += (fifty * 50);
		
		if (one == 1)
			cout << "У вас " << one << " одноцентовая монета" << endl;
		else
			cout << "У вас " << one << " одноцентовые монеты" << endl;

		if (five == 1)
			cout << "У вас " << five << " пятицентовая монета" << endl;
		else
			cout << "У вас " << five << " пятицентовых монет" << endl;

		if (ten == 1)
			cout << "У вас " << ten << " десятицентовая монета" << endl;
		else
			cout << "У вас " << ten << " десятицентовых монет" << endl;

		if (twentyfive == 1)
			cout << "У вас " << twentyfive << " 25-центовая монета" << endl;
		else
			cout << "У вас " << twentyfive << " 25-центовых монет" << endl;

		if (fifty == 1)
			cout << "У вас " << fifty << " 50-центовая монета" << endl;
		else
			cout << "У вас " << fifty << " 50-центовые монеты" << endl;

		cout << "Общая стоимость ваших монет равна " << summ / 100 << " долларов." << endl << endl << endl;
	}
}

std::unordered_map<std::string, std::function<void()>> TASKS_MAP =
{
   {"task8", task8},
   {"task9", task9},
   {"task10", task10},
   {"task11", task11}
};

int main()
{
	std::string task_name;
	std::cin >> task_name;
	TASKS_MAP[task_name]();
}