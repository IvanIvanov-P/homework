#include "../Hello, world!/std_lib_facilities.h"
#include <functional>

///  �������� 154, "����������"
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


///  �������� 155, ������ 1-5
void task101()
{
   // ����� �� �� ��������� ������� abs ��������� �������?
   // � ���� �������� ������� ����� �������..
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

///  �������� 155, ������ 6
void task1()
{
   double a = 0, min = 0, max = 0;

   // �������� ������ �����. ��� ����� ����� ���������� � ���������� ����� ����� ��������,
   // ������� �� �������������� min � max ���� ������ ������.
   if (cin >> a)
   {
      max = a;
      cout << "���������� ����� ����� �������� " << a << endl;
      min = a;
      cout << "���������� ����� ����� �������� " << min << endl;
   }

   // ������ ��� �� ����� ������ �������� ����� ������ i � ����������� �������� i � ����,
   // �.�. �� ������ �� ��� ��������� ������ ������ ��������.
   while (cin >> a)
   {
      if (a >= max)
      {
         max = a;
         cout << "���������� ����� ����� �������� " << a << endl;
      }

      if (a <= min)
      {
         min = a;
         cout << "���������� ����� ����� �������� " << min << endl;
      }

   }
}
// �� ���� ��������, ���� �� �������� � ������

///  �������� 155, ������ ����� 7-11
void task2() // ����� �� ��������!
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
         cout << "���������� ����� ����� �������� " << max << unit1 << endl;
         min = a;
         cout << "���������� ����� ����� �������� " << min << unit1 << endl;

         summ += a;
         v.push_back(a);
      }

      // ����� ��� ���� ���� � ��� �� if ??
      // 
      //if (unit1 == "cm" or unit1 == "m" or unit1 == "ft" or unit1 == "in")
      //{
      //   max = a;
      //   cout << "���������� ����� ����� �������� " << max << unit1 << endl;
      //   min = a;
      //   cout << "���������� ����� ����� �������� " << min << unit1 << endl;
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
            cout << "���������� ����� ����� �������� " << a << "m" << endl;
         }

         if (a <= min)
         {
            min = a;
            cout << "���������� ����� ����� �������� " << min << "m" << endl;
         }

         summ += a;
         v.push_back(a);
      }

      // ���� ������ ���
      // 
      //if (a >= max and unit1 == "cm" or a >= max and unit1 == "m" or a >= max and unit1 == "ft" or a >= max and unit1 == "in")
      //{
      //   max = a;
      //   cout << "���������� ����� ����� �������� " << a << "m" << endl;
      //}

      //if (a <= min and unit1 == "cm" or a <= min and unit1 == "m" or a <= min and unit1 == "ft" or a <= min and unit1 == "in")
      //{
      //   min = a;
      //   cout << "���������� ����� ����� �������� " << min << "m" << endl;
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

   cout << "\n" << "����� ���� �������� ������� ����� : " << summ;
}

///  �������� 157, ���������� ����� 2
void ex2()
{
   {
      vector<double> temps; // �������� ����������
      double temp;

      while (cin >> temp)
         // ��������� ������
         temps.push_back(temp); // ������� �� � ������
      // ��������� ������� �����������:

      double sum = 0;

      for (int i = 0; i < temps.size(); ++i)
      {
         sum += temps[i];
      }

      cout << "Average temperature: " << sum / temps.size() << endl;

      // ��������� ������� �����������:

      sort(temps.begin(), temps.end()); // ��������� ��������

      // �����������
      // "�� ������ �� �����"

      if (temps.size() / 2 == 1)
         cout << "������� �����������: " << temps[temps.size() / 2] << endl;
      else
         cout << "������� �����������: " << (temps[temps.size() / 2] + temps[(temps.size() / 2) - 1]) / 2 << endl;
   }
}

///  �������� 157, ���������� ����� 3
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

   cout << "����� ���������� ����� ����� �������� �����: " << summ << endl;
   cout << "���������� ���������� ����� �������� �����: " << v[0] << endl;
   cout << "���������� ���������� ����� �������� �����: " << v[v.size() - 1] << endl;
}

///  �������� 157, ���������� ����� 4
void ex4()
{
   int x = 50, divmin = 25;
   string choise = "", ranswer = "no";

   while (ranswer == "no" and 0 < x and x < 100)
   {
      cout << "���� ����� ������ " << x << "?" << endl;
//      cout << "divmin : " << divmin << endl; \\ // �������� ��� �����
      cin >> choise;

      if (choise == "yes" and 0 < x and x < 100)
      {
         x += divmin; // ����� ����������� � ������� �������

         if (x <= 0 or x >= 100)
         {
            cout << "������, ���� ����� ������ ���� ������ 0 � ������ 100" << endl;
            break;
         }

         cout << "���� ����� " << x << "?" << endl;
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
         x -= divmin; // ����� ����������� � ������� �������
         
         if (x <= 0 or x >= 100)
         {
            cout << "������, ���� ����� ������ ���� ������ 0 � ������ 100" << endl;
            break;
         }

         cout << "���� ����� " << x << "?" << endl;
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
      cout << "���������� ���� �����: " << x << endl;
   }
}

void ex5()
{
   double a = 0, b = 0, result = 0;
   string sign1 = "";

   cout << "������� ��� �����, � ����� ���� ��� ���������� ��������" << endl;

   while (cin >> a >> b >> sign1)
   {
      if (sign1 == "+")
      {
         result = a + b;
         cout << "����� " << a << " � " << b << " ����� " << result << endl;
      }

      if (sign1 == "-")
      {
         result = a - b;
         cout << "�������� " << a << " � " << b << " ����� " << result << endl;
      }

      if (sign1 == "*")
      {
         result = a * b;
         cout << "������������ " << a << " � " << b << " ����� " << result << endl;
      }

      if (sign1 == "/")
      {
         result = a / b;
         cout << "������� " << a << " � " << b << " ����� " << result << endl;
      }

      cout << "������� ��� �����, � ����� ���� ��� ���������� ��������" << endl;
   }
}

void ex6()
{
   vector <string> v = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
   int number = 0;
   string str = "", strindex = "";

   while (true)
   {
      cout << "��������, ��� �� ������ �������� �� ������, ���� ������, �� ������� \"str\", � ���� �����, �� ������� \"number\"" << endl;
      cin >> str;

      if (str == "str")
      {
         cout << "������� ������, ����� ��������� ��� � �����" << endl;
         cin >> str;
         auto&& it = find(v.begin(), v.end(), str); // ����� ������!!!!!

         if (it != v.end())
            cout << *it <<"\n";
         else
            cout << "������ �� ������� !\n";;
      }
      else if (str == "number")
      {
         cout << "������� �����, ����� ��������� ��� � ��������� �������" << endl;
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

   // �����������!!!!
   // ���� ����� ����� �� ����� �����
   // ���� ���������� ���� ����� ����� �� ����� ��������� ����

   while (true)
   {
      cout << "������� ������ ����� � ��������� ��� �������� �������� �� ����� �����, ��� ����������� ����� ������� \"stop\"" << endl;

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

      cout << "������ ����� ����� " << a << endl;

      cout << "������� ������ ����� � ��������� ��� �������� �������� �� ����� �����, ��� ����������� ����� ������� \"stop\"" << endl;

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

      cout << "������ ����� ����� " << b << endl;

      cout << "������� ���� ��� ���������� �������� ����������" << endl;

      cin >> sign1;

      if (sign1 == "+")
      {
         result = a + b;
         cout << "����� " << a << " � " << b << " ����� " << result << endl;
      }

      if (sign1 == "-")
      {
         result = a - b;
         cout << "�������� " << a << " � " << b << " ����� " << result << endl;
      }

      if (sign1 == "*")
      {
         result = a * b;
         cout << "������������ " << a << " � " << b << " ����� " << result << endl;
      }

      if (sign1 == "/")
      {
         result = double(a) / b;
         cout << "������� " << a << " � " << b << " ����� " << result << endl;
      }
   }
}

void ex8() // ex9 ����
           // ������������ ���������� ����� � ���� int �������� � 30 �������
           // ������������ ���������� ����� � ���� double �������� � 1021 �������
{
   int counter = 0;//, x = 1, seeds = 0;
   double seeds = 0, x = 1;

   while (true)
   {
      cout << "������� ���������� ����" << endl;
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

      cout << "���� ��������� " << counter << " ������" << endl;
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
      cout << "������� 1 ��� \"rock\" ��� 2 ��� \"scissors\" ��� 3 ��� \"paper\"" << endl;
      cin >> userin;
      cout << "������� ����� ����� �� 0 �� 2" << endl;
      cin >> randomi;
      randomi = randomi // ������� ������� ���������� ����� �������

      switch (userin)
      {
      case 1:
         if (rsp[randomi] == "rock")
         {
            cout << "���������� ����� rock" << endl;
            cout << "�����!" << endl;
            break;
         }
         else if (rsp[randomi] == "scissiors")
         {
            cout << "���������� ����� scissiors" << endl;
            cout << "�� ��������!" << endl;
            break;
         }
         else if (rsp[randomi] == "paper")
         {
            cout << "���������� ����� paper" << endl;
            cout << "�� ���������!" << endl;
            break;
         }
      case 2:
         if (rsp[randomi] == "rock")
         {
            cout << "���������� ����� rock" << endl;
            cout << "�� ���������!" << endl;
            break;
         }
         else if (rsp[randomi] == "scissiors")
         {
            cout << "���������� ����� scissiors" << endl;
            cout << "�����!" << endl;
            break;
         }
         else if (rsp[randomi] == "paper")
         {
            cout << "���������� ����� paper" << endl;
            cout << "�� ��������!" << endl;
            break;
         }
      case 3:
         if (rsp[randomi] == "rock")
         {
            cout << "���������� ����� rock" << endl;
            cout << "�� ��������!" << endl;
            break;
         }
         else if (rsp[randomi] == "scissiors")
         {
            cout << "���������� ����� scissiors" << endl;
            cout << "�� ���������!" << endl;
            break;
         }
         else if (rsp[randomi] == "paper")
         {
            cout << "���������� ����� paper" << endl;
            cout << "�����!" << endl;
            break;
         }
            
      }
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
   {"ex10", ex10}
};

int main()
{
   setlocale(LC_ALL, "Rus");

   std::string task_name;
   std::cout << "������� ����� ����� : ";
   std::cin >> task_name;
   TASKS_MAP[task_name]();
}