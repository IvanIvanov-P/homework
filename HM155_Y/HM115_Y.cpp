#include "../Hello, world!/std_lib_facilities.h"
#include <functional>

void prelude()
{
	vector <string> words;

	vector <string> badwords(1);
	badwords[0] = "Broccoli";

	string word = "";

	while (cin >> word)
	{
		if (word == "stop")
			//			cout << endl << endl;
			break;

		words.push_back(word);
	}

	for (int i1 = 0; badwords.size() >= i1; ++i1)
		for (int i2 = 0; words.size() >= i2; ++i2)
			if (words[i2] == badwords[i1])
				cout << "BEEP" << endl;
			else
				cout << words[i2] << endl;
}

void task101()
{
	// можно ли не используя функцию abs выполнить задание?
	// у меня выходило слишком много условий..
	double a = 0, b = 0;

	while (cin >> a >> b)
	{
		if (abs(a - b) < 0.01 and a > b)
			cout << a << " " << b << endl << endl;
		else if (abs(a - b) < 0.01 and a < b)
			cout << b << " " << a << endl << endl;
		else if (a == b)
			cout << a << " " << b << endl << endl;
	}
}

void task1()
{
	double a = 0, min = numeric_limits<double>::max(), max = numeric_limits<double>::min();
	int i = 0; //счётчик

	while (cin >> a)
	{
		if (i == 0)
		{
			max = a;
			cout << "Наибольшее среди ранее введённых " << a << endl;
			min = a;
			cout << "Наименьшее среди ранее введённых " << min << endl;
			++i;
		}

		if (a >= max and i != 1)
		{
			max = a;
			cout << "Наибольшее среди ранее введённых " << a << endl;
		}
		
		if (a <= min and i != 1)
		{
			min = a;
			cout << "Наименьшее среди ранее введённых " << min << endl;
		}
		++i;
	}
}
// не буду изменять, кину на проверку в коммит

void task2() // нихуя не работает 9 задание на 155 странице
{
	double a = 0, min = 0, max = 0, summ = 0;  // min = numeric_limits<double>::max(), max = numeric_limits<double>::min();
	int i = 0; //счётчик
	string unit1 = "";

	while (cin >> a >> unit1)
	{
		if (unit1 == "cm")
		{
			a /= 100;
		}
		else if (unit1 == "ft")
		{
			a = (a * 12) * 2.54;
		}
		else if (unit1 == "in")
		{
			a *= 2.54;
		}

		if (i == 0 and unit1 == "cm" or i == 0 and unit1 == "m" or i == 0 and unit1 == "ft" or i == 0 and unit1 == "in")
		{
			max = a;
			cout << "Наибольшее среди ранее введённых " << a << unit1 << endl;
			min = a;
			cout << "Наименьшее среди ранее введённых " << min << unit1 << endl;
			++i;
		}

		if (a >= max and i != 1 and unit1 == "cm" or a <= min and i != 1 and unit1 == "m" or a <= min
			and i != 1 and unit1 == "ft" or a <= min and i != 1 and unit1 == "in")
		{
			max = a;
			cout << "Наибольшее среди ранее введённых " << a << unit1 << endl;
		}

		if (a <= min and i != 1 and unit1 == "cm" or a <= min and i != 1 and unit1 == "m" or a <= min
			and i != 1 and unit1 == "ft" or a <= min and i != 1 and unit1 == "in")
		{
			min = a;
			cout << "Наименьшее среди ранее введённых " << min << unit1 << endl;
		}
		++i;
		if (unit1 == "cm" or unit1 == "m" or unit1 == "ft" or unit1 == "in")
			summ += a;
	}
	cout << summ;
}

std::unordered_map<std::string, std::function<void()>> TASKS_MAP =
{
	{"0", prelude},
	{"101", task101},
    {"1", task1},
	{"2", task2}
};

int main()
{
	setlocale(LC_ALL, "Rus");

	std::string task_name;
	std::cout << "введите номер таска : ";
	std::cin >> task_name;
	TASKS_MAP[task_name]();
}