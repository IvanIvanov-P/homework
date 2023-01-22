#include "../Hello, world!/std_lib_facilities.h"
#include <functional>

///  Страница 154, "попробуйте"
void prelude()
{
   vector <string> words;

   vector <string> badwords(1);
   badwords[0] = "Broccoli";

   string word = "";

   while (cin >> word)
   {
      if (word == "stop")
         //         cout << endl << endl;
         break;

      words.push_back(word);
   }

   for (int i1 = 0; badwords.size() >= i1; ++i1)
      for (int i2 = 0; words.size() >= i2; ++i2)
         if (words[i2] == badwords[i1])
            cout << "BLEEP" << endl;
         else
            cout << words[i2] << endl;
}


///  Страница 155, задача 1-5
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

///  Страница 155, задача 6
void task1()
{
   double a = 0, min = 0, max = 0;

   // Получаем первое число. Оно будет сразу Наибольшее и Наименьшее среди ранее введённых,
   // поэтому мы инициализируем min и max этим первым числом.
   if (cin >> a)
   {
      max = a;
      cout << "Наибольшее среди ранее введённых " << a << endl;
      min = a;
      cout << "Наименьшее среди ранее введённых " << min << endl;
   }

   // Теперь нам не нужно каждую итерацию цикла менять i и производить сранение i с нулём,
   // т.е. мы делаем на три сравнения меньше каждую итерацию.
   while (cin >> a)
   {
      if (a >= max)
      {
         max = a;
         cout << "Наибольшее среди ранее введённых " << a << endl;
      }

      if (a <= min)
      {
         min = a;
         cout << "Наименьшее среди ранее введённых " << min << endl;
      }

   }
}
// не буду изменять, кину на проверку в коммит

///  Страница 155, задача номер 7-11
void task2() // вроде всё работает!
{
   double a = 0, min = 0, max = 0, summ = 0;  // min = numeric_limits<double>::max(), max = numeric_limits<double>::min();
   string unit1 = "";
   vector <double> v;

   if (cin >> a >> unit1)
   {
      if (unit1 == "cm")
      {
         a /= 100;
      }
      else if (unit1 == "ft")
      {
         a = ((a * 12) * 2.54) / 100;
      }
      else if (unit1 == "in")
      {
         a = (a * 2.54) / 100;
      }

      if (unit1 == "cm" or unit1 == "m" or unit1 == "ft" or unit1 == "in")
      {
         max = a;
         cout << "Наибольшее среди ранее введённых " << max << unit1 << endl;
         min = a;
         cout << "Наименьшее среди ранее введённых " << min << unit1 << endl;

         summ += a;
         v.push_back(a);
      }

      // зачем два раза один и тот же if ??
      // 
      //if (unit1 == "cm" or unit1 == "m" or unit1 == "ft" or unit1 == "in")
      //{
      //   max = a;
      //   cout << "Наибольшее среди ранее введённых " << max << unit1 << endl;
      //   min = a;
      //   cout << "Наименьшее среди ранее введённых " << min << unit1 << endl;
      //}

      //if (unit1 == "cm" or unit1 == "m" or unit1 == "ft" or unit1 == "in")
      //{
      //   summ += a;
      //   v.push_back(a);
      //}
   }

   while (cin >> a >> unit1)
   {
      if (unit1 == "cm")
      {
         a /= 100;
      }
      else if (unit1 == "ft")
      {
         a = ((a * 12) * 2.54) / 100;
      }
      else if (unit1 == "in")
      {
         a = (a * 2.54) / 100;
      }

      if (unit1 == "cm" or unit1 == "m" or unit1 == "ft" or unit1 == "in")
      {
         if (a >= max)
         {
            max = a;
            cout << "Наибольшее среди ранее введённых " << a << "m" << endl;
         }

         if (a <= min)
         {
            min = a;
            cout << "Наименьшее среди ранее введённых " << min << "m" << endl;
         }

         summ += a;
         v.push_back(a);
      }

      // Твой старый код
      // 
      //if (a >= max and unit1 == "cm" or a >= max and unit1 == "m" or a >= max and unit1 == "ft" or a >= max and unit1 == "in")
      //{
      //   max = a;
      //   cout << "Наибольшее среди ранее введённых " << a << "m" << endl;
      //}

      //if (a <= min and unit1 == "cm" or a <= min and unit1 == "m" or a <= min and unit1 == "ft" or a <= min and unit1 == "in")
      //{
      //   min = a;
      //   cout << "Наименьшее среди ранее введённых " << min << "m" << endl;
      //}

      //if (unit1 == "cm" or unit1 == "m" or unit1 == "ft" or unit1 == "in")
      //{
      //   summ += a;
      //   v.push_back(a);
      //}
   }

   sort(v.begin(), v.end());

   for (int i1 = 0; v.size() > i1; ++i1)
   {
      cout << v[i1] << "  " << "m" << endl;
   }

   cout << "\n" << "Сумма всех введённых величин равна : " << summ;
}

///  Страница 157, упражнение номер 2
void ex2()
{
   {
      vector<double> temps; // значения температур
      double temp;

      while (cin >> temp)
         // считываем данные
         temps.push_back(temp); // заносим их в вектор
      // вычисляем среднюю температуру:

      double sum = 0;

      for (int i = 0; i < temps.size(); ++i)
      {
         sum += temps[i];
      }

      cout << "Average temperature: " << sum / temps.size() << endl;

      // вычисляем медиану температуры:

      sort(temps.begin(), temps.end()); // сортируем значения

      // температуры
      // "от начала до конца"

      if (temps.size() / 2 == 1)
         cout << "Медиана температуры: " << temps[temps.size() / 2] << endl;
      else
         cout << "Медиана температуры: " << (temps[temps.size() / 2] + temps[(temps.size() / 2) - 1]) / 2 << endl;
   }
}

///  Страница 157, упражнение номер 3
void ex3()
{
   double n = 0;
   int summ = 0;
   vector <double> v;

   while (cin >> n)
   {
      v.push_back(n);
   }

   sort(v.begin(), v.end());

   for (int i = 0; v.size() > i; ++i)
   {
      summ += v[i];
   }

   cout << "Сумма расстояний между всеми городами равна: " << summ << endl;
   cout << "Наименьшее расстояние между городами равно: " << v[0] << endl;
   cout << "Наибольшее расстояние между городами равно: " << v[v.size() - 1] << endl;
}

///  Страница 157, упражнение номер 4
void ex4()
{
   int x = 50, divmin = 25;
   string choise = "", ranswer = "no";

   while (ranswer == "no" and 0 < x and x < 100)
   {
      cout << "Ваше число больше " << x << "?" << endl;
//      cout << "divmin : " << divmin << endl; \\ // создавал для теста
      cin >> choise;

      if (choise == "yes" and 0 < x and x < 100)
      {
         x += divmin; // число округляется в меньшую сторону

         if (x <= 0 or x >= 100)
         {
            cout << "Ошибка, ваше число должно быть больше 0 и меньше 100" << endl;
            break;
         }

         cout << "Ваше число " << x << "?" << endl;
         cin >> ranswer;
         divmin = divmin / 2;

         if (divmin % 2 == 1 and divmin != 2)
         {
            ++divmin;
         }
         else if (divmin == 2 or divmin == 0)
         {
            divmin = 1;
         }
      }

      else if (choise == "no" and 0 < x and x < 100)
      {
         x -= divmin; // число округляется в меньшую сторону
         
         if (x <= 0 or x >= 100)
         {
            cout << "Ошибка, ваше число должно быть больше 0 и меньше 100" << endl;
            break;
         }

         cout << "Ваше число " << x << "?" << endl;
         cin >> ranswer;
         divmin = divmin / 2;

         if (divmin % 2 == 1 and divmin != 2)
         {
            ++divmin;
         }
         else if (divmin == 2 or divmin == 0)
         {
            divmin = 1;
         }
      }
   }

   if (x > 0 and x < 100)
   {
      cout << "Загаданное вами число: " << x << endl;
   }
}

void ex5()
{
   double a = 0, b = 0, result = 0;
   string sign1 = "";

   cout << "Введите два числа, а затем знак для выполнения операции" << endl;

   while (cin >> a >> b >> sign1)
   {
      if (sign1 == "+")
      {
         result = a + b;
         cout << "Сумма " << a << " и " << b << " равна " << result << endl;
      }

      if (sign1 == "-")
      {
         result = a - b;
         cout << "Разность " << a << " и " << b << " равна " << result << endl;
      }

      if (sign1 == "*")
      {
         result = a * b;
         cout << "Произведение " << a << " и " << b << " равно " << result << endl;
      }

      if (sign1 == "/")
      {
         result = a / b;
         cout << "Деление " << a << " и " << b << " равно " << result << endl;
      }

      cout << "Введите два числа, а затем знак для выполнения операции" << endl;
   }
}

void ex6()
{
   vector <string> v = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten" };
   int number = 0;
   string str = "", strindex = "";

   while (true)
   {
      cout << "Выберете, что вы хотите получить на выходе, если строку, то введите \"str\", а если число, то введите \"number\"" << endl;
      cin >> str;

      if (str == "str")
      {
         cout << "Введите строку, чтобы перевести его в число" << endl;
         cin >> str;
         auto&& it = find(v.begin(), v.end(), str); // гавно ебаное!!!!!

         if (it != v.end())
            cout << *it <<"\n";
         else
            cout << "Строка не найдена !\n";;
      }
      else if (str == "number")
      {
         cout << "Введите число, чтобы перевести его в строковой вариант" << endl;
         cin >> number;
         cout << v[number - 1] << endl;
      }
   }
}

void ex7()
{
   vector <string> v = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten" };
   double result = 0, counter = 1, a = 0, b = 0, a1 = 0;
   string sign1 = "";
   signed char transition = ' ';

   cout << "Введите первое число последовательно, затем введите \"|\" для выхода из цикла" << endl;

   while (cin >> transition)
   {
      if (transition == '|')
      {
         break;
      }
      else
      {
         a1 = transition;
         a = a * 10 + a1;
         counter = counter * 10;
      }
   }
//   a /= counter * (counter / 10);
   cout << "Первое число: " << a << endl;


   while (cin >> a >> b >> sign1)
   {
      if (sign1 == "+")
      {
         result = a + b;
         cout << "Сумма " << a << " и " << b << " равна " << result << endl;
      }

      if (sign1 == "-")
      {
         result = a - b;
         cout << "Разность " << a << " и " << b << " равна " << result << endl;
      }

      if (sign1 == "*")
      {
         result = a * b;
         cout << "Произведение " << a << " и " << b << " равно " << result << endl;
      }

      if (sign1 == "/")
      {
         result = a / b;
         cout << "Деление " << a << " и " << b << " равно " << result << endl;
      }

      cout << "Введите два числа, а затем знак для выполнения операции" << endl;
   }
}

std::unordered_map<std::string, std::function<void()>> TASKS_MAP =
{
   {"0", prelude},
   {"101", task101},
   {"1", task1},
   {"2", task2},
   {"ex2", ex2},
   {"ex3", ex3},
   {"ex4", ex4},
   {"ex5", ex5},
   {"ex6", ex6},
   {"ex7", ex7}
};

int main()
{
   setlocale(LC_ALL, "Rus");

   std::string task_name;
   std::cout << "введите номер таска : ";
   std::cin >> task_name;
   TASKS_MAP[task_name]();
}