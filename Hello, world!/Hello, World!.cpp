#include <C:\Users\5\source\repos\std_lib_facilities.h>
//#include "std_lib_facilities.h"

int main()
{
	setlocale(LC_ALL, "Rus");
	string first_name = "";
	cout << "Введите имя адресата." << endl;
	cin >> first_name;
	cout << "Dear, " << first_name << "." << endl << "Как дела?\n\n У меня все хорошо. Я скучаю по тебе.\n";


	string friend_name = "";
	cout << "Введите имя друга.\n";
	cin >> friend_name;
	cout << "Видел ли ты " << friend_name << " недавно?" << endl;


	char friend_sex = 0;
	cout << "Введи m, если ваш друг — мужчина, и f — если женщина." << endl;
	cin >> friend_sex;
	if (friend_sex == 'm')
		cout << "Если ты увидишь " << friend_name << " пожалуйста, попроси его позвонить мне." << endl;
	else
		cout << "Если ты увидишь " << friend_name << " пожалуйста, попроси её позвонить мне." << endl;


	int age = 0;
	cout << "Введите ваш возраст.\n";
	cin >> age;


	if (0 >= age or age >= 110)
		simple_error("Ты шутишь!");

	if (0 <= age <= 110)
		cout << "Я слышал, ты только что отметил день рождения и тебе исполнилось " << age << " полных лет." << endl;

	if (age < 12)
		cout << "На следующий год тебе исполнится " << age + 1 << " лет." << endl;
	else if (age == 18)
		cout << "На следующий год ты можешь голосовать." << endl;
	else if (age > 60)
		cout << "Я надеюсь, что ты не скучаешь на пенсии.\n" << endl;
	cout << "Искренне твой,\tMark.";
}