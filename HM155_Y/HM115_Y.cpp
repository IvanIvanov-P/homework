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
      cout << "������� ����� ����� " << endl;
      cin >> randomi;
      randomi = abs(randomi % 3);

      switch (userin)
      {
      case 1:
         if (rsp[randomi] == "rock")
         {
            cout << "���������� ����� rock" << endl;
            cout << "�����!" << endl;
            break;
         }
         else if (rsp[randomi] == "scissors")
         {
            cout << "���������� ����� scissors" << endl;
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
         else if (rsp[randomi] == "scissors")
         {
            cout << "���������� ����� scissors" << endl;
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
         else if (rsp[randomi] == "scissors")
         {
            cout << "���������� ����� scissors" << endl;
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

   // number / i + 1 - ����� ����� �� �������� i, ������� ���������� ��������, ������� �� ���������� � ���������� ���������
   // ����� number � ���� ��� true, �� ���������� ����, � ���� false, �� ���������� �������� ������ ������ ����������� � ���� �����������

   for (int i = 2; i <= number / i + 1; ++i) 
   {
      if (number % i == 0)
      {
         return false;
      }
   }
   return true;
}

void ex11() // ex 12 ����
{
   vector <int> simplenumb;
   int max = 0;

   cout << "������� �������� max, ��� ����, ����� ��������� ������� ������� ��� ���������� ������� �����" << endl;
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

void ex13() // ex 14-15 ����
{
   int max = 0, p = 2, counter = 1, counter1 = 0, n = 0;
   bool flag = 1;
   vector <int> alln;

   cout << "������� ������� ������ ��� ���������� ������� �����" << endl;
   cin >> max;

   cout << "������� ���������� ������� �����, ������� ������� �����" << endl;
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
            ++counter1; // ������� ���������� ���������� �����
         }
      }

      if (counter == alln.size()) // �������, ������� ��������� ���������� �� ������������ �������� ����� � �������, ���� true, �� ���������� �� 2
      {
         p = 2;
      }
      else
      {
         p = alln[counter];
         ++counter;
      }
      
      if (counter1 == alln.size()) // �������, ������� ��������� ��������� �� ���������� ������� ����� � ����� ����������� � ��� ������� true - ��������� ����
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

   cout << "������� �����, ����� �������� ��� � ������, ��� ���������� ����� ����������� \"|\"" << endl;
   cin >> n;
   nums.push_back(n);
   max = n;
   min = n;
   cout << "������� �����, ����� �������� ��� � ������" << endl;

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
      cout << "������� �����, ����� �������� ��� � ������" << endl;
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

   cout << "����������� ����� ����� " << min << "\t" << "������������ ����� ����� " << max << endl;
   cout << "���� ����� " << mode << endl;
}

//�������� ���������, ������������ ���������� � ���������� �����, � �����
//���� ������������������ �����.
void ex17()
{
   vector <int> nums;
   string ask = "", strs = "", mode = "";
   int n = 0, counter = 0, maxcounter = 0, min = 0, max = 0;
   
   while (true) 
   {
      cout << "���� �������� ������ ������, �� �������� \"str\", � ���� �����, �� \"numb\"" << endl;
      cin >> ask;

      if (ask == "str")
      {
         cout << "������� ������, ����� ����� � ����" << endl;
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
         cout << "���� ����� " << mode << endl;
      }
      else if (ask == "numb")
      {
         cout << "��������������� ������� �����, ����� ������� \"1\" ��� ������ ����������" << endl;
         cout << "������� �����, ����� �������� ��� � ������" << endl;
         cin >> n;
         nums.push_back(n);
         max = n;
         min = n;
         cout << "������� �����, ����� �������� ��� � ������" << endl;

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
            cout << "������� �����, ����� �������� ��� � ������" << endl;
         }
         cout << "����������� ����� ����� " << min << "\t" << "������������ ����� ����� " << max << endl;
         nums.clear();
      }
   }
}

//�������� ��������� ��� ������� ������������ ���������.������������ ���� -
//����� ����� ��� ax^2 + bx + c = 0. ���� �� �� ������ ������ ��� ������� ����� ���� -
//�����, ��������� �������������� ������������.����������, ��� ������������
//����� �������� ����� ������������, ������ ��� ���������� � ������� ������.
//��� ����� ����� a, b � � ����������� ���������� ���� double.��������� ���� -
//�������� ��������� ����� ��� �������, �������� ��� ��������, x1 � x2.
void ex18()
{
   double a = 0, b = 0, c = 0, x1 = 0, x2 = 0, D = 0;

   cout << "������� ��������������� �������� a b c" << endl;
   cin >> a >>  b >> c;

   D = (b * b) - (4 * a * c);
   if (D < 0)
   {
      cout << "� ��������� ��� �������������� �������" << endl;
   }
   else if (D == 0)
   {
      x1 = -b / (2 * a);
      cout << "������������ ����� ����� = \t" << x1 << endl;
   }
   else if (D > 0)
   {
      x1 = (-b + sqrt(D)) / (2 * a);
      x2 = (-b - sqrt(D)) / (2 * a);
      cout << "������ ������ ����� = \t" << x1 << endl;
      cout << "������ ������ ����� = \t" << x2 << endl;
   }
}

//�������� ���������, � ������� ������� �������� ����� ���, ��������� �� �����
//� ��������, �������� Joe 17 � Barbara 22. ��� ������ ���� �������� ���
//� ������ names, � ����� � � ������ scores(� ��������������� �������, ��� ���
//���� names[7] == "Joe", �� scores[7] == 17).���������� ����, ����� ������
//NoName 0. ���������, ��� ������ ��� ���������, � �������� ��������� ��
//������, ���� ���� ������ ������. �������� �� ������ ��� ���� (���, �����) ��
//����� � ������.
//
//�������� ��������� �� ���. 19 ���, ����� ��� ����� ����� ��� �������� ���� -
//����������� ���������� ������ ��� ��������� "name not found".
//
//�������� ��������� �� ���. 19 ���, ����� ��� ����� ������ ����� ��� ��������
//��� ����� ���������, ���������� �������� ���������� ������ ��� ���������
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
   
   cout << "������� ��� � ���������� �����" << endl;

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
   std::cout << "������� ����� ����� : ";
   std::cin >> task_name;
   TASKS_MAP[task_name]();
}