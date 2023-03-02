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
   vector <string> v = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
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
         cout << v[number] << endl;
      }
   }
}

void ex7()
{
   vector <string> vstr = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
   vector <string> vint = { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9" };
   double result = 0, a1 = 0, b1 = 0;
   int a = 0, b = 0,  x = 1;
   string sign1 = "", number = "", test = "";

   // НАПОМИНАНИЕ!!!!
   // Ввод чисел будет по одной цифре
   // Ввод строкового вида чисел будет по одной строковой цифе

   while (true)
   {
      cout << "Введите первое число в строковом или числовом варианте по одной цифре, для прекращения ввода введите \"stop\"" << endl;

      while (cin >> number)
      {
         for (int i = 0; i <= 9; ++i)
         {
            if (vstr[i] == number or number == vint[i])
            {
               a = a * 10 + i;
               break;
            }
         }

        double a = a1;

         if (number == "stop")
            break;
      }

      cout << "Первое число равно " << a << endl;

      cout << "Введите второе число в строковом или числовом варианте по одной цифре, для прекращения ввода введите \"stop\"" << endl;

      while (cin >> number)
      {
         for (int i = 0; i <= 9; ++i)
         {
            if (vstr[i] == number or number == vint[i])
            {
               b = b * 10 + i;
               break;
            }
         }

         double b = b1;

         if (number == "stop")
            break;
      }

      cout << "Второе число равно " << b << endl;

      cout << "Введите знак для выполнения операции вычисления" << endl;

      cin >> sign1;

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
         result = double(a) / b;
         cout << "Деление " << a << " и " << b << " равно " << result << endl;
      }
   }
}

void ex8() // ex9 Тоже
           // Максимальное количество зерен в типе int возможно в 30 клетках
           // Максимальное количество зерен в типе double возможно в 1021 клетках
{
   int counter = 0;//, x = 1, seeds = 0;
   double seeds = 0, x = 1;

   while (true)
   {
      cout << "Введите количество зерён" << endl;
      cin >> seeds;

      while (x < seeds or seeds == 1)
      {
         if (seeds == 1)
         {
            counter = 1;
            break;
         }
         x *= 2;
         ++counter;
      }

      cout << "Надо заполнить " << counter << " клеток" << endl;
      x = 1;
      counter = 0;
   }
}

void ex10()
{
   vector <string> rsp = { "rock", "scissors", "paper" };
   int userin = 0, randomi = 0;
   
   while (true)
   {
      cout << "Введите 1 для \"rock\" или 2 для \"scissors\" или 3 для \"paper\"" << endl;
      cin >> userin;
      cout << "Введите любое число " << endl;
      cin >> randomi;
      randomi = abs(randomi % 3);

      switch (userin)
      {
      case 1:
         if (rsp[randomi] == "rock")
         {
            cout << "Компьютеру выпал rock" << endl;
            cout << "Ничья!" << endl;
            break;
         }
         else if (rsp[randomi] == "scissors")
         {
            cout << "Компьютеру выпал scissors" << endl;
            cout << "Вы победили!" << endl;
            break;
         }
         else if (rsp[randomi] == "paper")
         {
            cout << "Компьютеру выпал paper" << endl;
            cout << "Вы проиграли!" << endl;
            break;
         }
      case 2:
         if (rsp[randomi] == "rock")
         {
            cout << "Компьютеру выпал rock" << endl;
            cout << "Вы проиграли!" << endl;
            break;
         }
         else if (rsp[randomi] == "scissors")
         {
            cout << "Компьютеру выпал scissors" << endl;
            cout << "Ничья!" << endl;
            break;
         }
         else if (rsp[randomi] == "paper")
         {
            cout << "Компьютеру выпал paper" << endl;
            cout << "Вы победили!" << endl;
            break;
         }
      case 3:
         if (rsp[randomi] == "rock")
         {
            cout << "Компьютеру выпал rock" << endl;
            cout << "Вы победили!" << endl;
            break;
         }
         else if (rsp[randomi] == "scissors")
         {
            cout << "Компьютеру выпал scissors" << endl;
            cout << "Вы проиграли!" << endl;
            break;
         }
         else if (rsp[randomi] == "paper")
         {
            cout << "Компьютеру выпал paper" << endl;
            cout << "Ничья!" << endl;
            break;
         }
            
      }
   }
}

bool IsSimple(int number)
{
   if (number < 2)
   {
      return false;
   }

   if (number == 2)
   {
      return true;
   }

   // number / i + 1 - делим число на итератор i, получая наибольший делитель, который мы сравниваем с наименьшим делителем
   // числа number и если это true, то выпыолняем цикл, а если false, то наименьший делитель строго больше наибольшего и цикл разрывается

   for (int i = 2; i <= number / i + 1; ++i) 
   {
      if (number % i == 0)
      {
         return false;
      }
   }
   return true;
}

void ex11() // ex 12 тоже
{
   vector <int> simplenumb;
   int max = 0;

   cout << "Введите значение max, для того, чтобы обозначит верхнюю границу для извлечения простых чисел" << endl;
   cin >> max;
 
   for (int i = 1; i <= max; ++i)
   {
      if (IsSimple(i))
      {
         simplenumb.push_back(i);
      }
 
   }
   for (vector<int>::iterator it = simplenumb.begin(); it != simplenumb.end(); ++it)
      cout << *it << " ";
}

void ex13() // ex 14-15 тоже
{
   int max = 0, p = 2, counter = 1, counter1 = 0, n = 0;
   bool flag = 1;
   vector <int> alln;

   cout << "Введите верхний предел для вычесления простых чисел" << endl;
   cin >> max;

   cout << "Введите количество простых чисел, которые желаете найти" << endl;
   cin >> n;

   for (int i = 2; i <= max; ++i)
   {
      alln.push_back(i);
   }

   while (flag)
   {
      for (int i = 0; i < alln.size(); ++i)
      {
         if (alln[i] % p == 0 and alln[i] != p)
         {
            vector<int>::iterator it1 = alln.begin() + i;
            alln.erase(it1);
         }
         else
         {
            ++counter1; // считает количество оставшихся чисел
         }
      }

      if (counter == alln.size()) // условие, которое проверяет достигнуто ли присваивание крайнего числа в векторе, если true, то сбрасываем до 2
      {
         p = 2;
      }
      else
      {
         p = alln[counter];
         ++counter;
      }
      
      if (counter1 == alln.size()) // условие, которое проверяет совпадает ли количество простых чисел с общим количеством и при условии true - разрывает цикл
      {
         flag = false;
      }

      counter1 = 0;
   }


   for (vector<int>::iterator it = alln.begin(); it != alln.begin() + n; ++it)
   {
      cout << *it << " ";
   }
}

void ex16()
{
   vector <int> nums;
   int n = 0, max, min, counter = 0, maxcounter = 0, mode = 0;

   cout << "Введите число, чтобы добавить его в вектор, для прерывания цикла используйте \"|\"" << endl;
   cin >> n;
   nums.push_back(n);
   max = n;
   min = n;
   cout << "Введите число, чтобы добавить его в вектор" << endl;

   while (cin >> n)
   {
      if (n >= max)
      {
         max = n;
      }
      else if (n <= min)
      {
         min = n;
      }

      nums.push_back(n);
      cout << "Введите число, чтобы добавить его в вектор" << endl;
   }

   for (int i = 0; i < nums.size(); ++i)
   {
      for (int j = 0; j < nums.size(); ++j)
      {
         if (nums[i] == nums[j])
         {
            ++counter;
         }
      }
      if (counter >= maxcounter)
      {
         maxcounter = counter;
         mode = nums[i];
      }
      counter = 0;
   }

   cout << "Минимальное число равно " << min << "\t" << "Максимальное число равно " << max << endl;
   cout << "Мода равна " << mode << endl;
}

//Напишите программу, определяющую наименьшее и наибольшее числа, а также
//моду последовательности строк.
void ex17()
{
   vector <int> nums;
   string ask = "", strs = "", mode = "";
   int n = 0, counter = 0, maxcounter = 0, min = 0, max = 0;
   
   while (true) 
   {
      cout << "Если выхотите ввести строку, то наберите \"str\", а если число, то \"numb\"" << endl;
      cin >> ask;

      if (ask == "str")
      {
         cout << "Введите строку, чтобы найти её моду" << endl;
         cin >> strs;
         for (int i = 0; i < strs.size(); ++i)
         {
            for (int j = 0; j < strs.size(); ++j)
            {
               if (strs[i] == strs[j])
               {
                  ++counter;
               }
            }
            if (counter >= maxcounter)
            {
               maxcounter = counter;
               mode = strs[i];
            }
            counter = 0;
         }
         cout << "Мода равна " << mode << endl;
      }
      else if (ask == "numb")
      {
         cout << "Последовательно вводите числа, затем введите \"1\" для вывода результата" << endl;
         cout << "Введите число, чтобы добавить его в вектор" << endl;
         cin >> n;
         nums.push_back(n);
         max = n;
         min = n;
         cout << "Введите число, чтобы добавить его в вектор" << endl;

         while (cin >> n)
         {
            if (n == -1)
            {
               break;
            }

            if (n >= max)
            {
               max = n;
            }

            if (n <= min)
            {
               min = n;
            }

            nums.push_back(n);
            cout << "Введите число, чтобы добавить его в вектор" << endl;
         }
         cout << "Минимальное число равно " << min << "\t" << "Максимальное число равно " << max << endl;
         nums.clear();
      }
   }
}

//Напишите программу для решения квадратичных уравнений.Квадратичное урав -
//нение имеет вид ax^2 + bx + c = 0. Если вы не знаете формул для решения этого урав -
//нения, проведите дополнительные исследования.Напоминаем, что программисты
//часто проводят такие исследования, прежде чем приступают к решению задачи.
//Для ввода чисел a, b и с используйте переменные типа double.Поскольку квад -
//ратичное уравнение имеет два решения, выведите оба значения, x1 и x2.
void ex18()
{
   double a = 0, b = 0, c = 0, x1 = 0, x2 = 0, D = 0;

   cout << "Введите последовательно значения a b c" << endl;
   cin >> a >>  b >> c;

   D = (b * b) - (4 * a * c);
   if (D < 0)
   {
      cout << "У уравнения нет целочисленного решения" << endl;
   }
   else if (D == 0)
   {
      x1 = -b / (2 * a);
      cout << "Единственный корен равен = \t" << x1 << endl;
   }
   else if (D > 0)
   {
      x1 = (-b + sqrt(D)) / (2 * a);
      x2 = (-b - sqrt(D)) / (2 * a);
      cout << "Первый корень равен = \t" << x1 << endl;
      cout << "Второй корень равен = \t" << x2 << endl;
   }
}

//Напишите программу, в которую сначала вводится набор пар, состоящих из имени
//и значения, например Joe 17 и Barbara 22. Для каждой пары занесите имя
//в вектор names, а число — в вектор scores(в соответствующие позиции, так что
//если names[7] == "Joe", то scores[7] == 17).Прекратите ввод, введя строку
//NoName 0. Убедитесь, что каждое имя уникально, и выведите сообщение об
//ошибке, если имяв ведено дважды. Выведите на печать все пары (имя, баллы) по
//одной в строке.
//
//Измените программу из упр. 19 так, чтобы при вводе имени она выводила соот -
//ветствующее количество баллов или сообщение "name not found".
//
//Измените программу из упр. 19 так, чтобы при вводе целого числа она выводила
//все имена студентов, получивших заданное количество баллов или сообщение
//"score not found".

bool Nametest(string name, vector <string> names, vector <int> scores)
{
   for (int i = 0; i < names.size(); ++i)
   {
      if (name == names[i])
   }
}

void ex19()
{
   vector <string> names;
   vector <int> scores;
   string name = "";
   int score = 0;
   
   cout << "Введите имя и количество очков" << endl;

   while (cin >> name >> score)
   {
      
   }

   for (int i = 0; i < names.size(); ++i)
   {
      cout << names[i] << "\t" << scores[i] << endl;
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
   {"ex7", ex7},
   {"ex8", ex8},
   {"ex10", ex10},
   {"ex11", ex11},
   {"ex13", ex13},
   {"ex16", ex16},
   {"ex17", ex17},
   {"ex18", ex18},
   {"ex19", ex19}
};

int main()
{
   setlocale(LC_ALL, "Rus");

   std::string task_name;
   std::cout << "введите номер таска : ";
   std::cin >> task_name;
   TASKS_MAP[task_name]();
}