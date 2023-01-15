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
         //         cout << endl << endl;
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


///  �������� 155, ������ ����� 3
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
};;

void task1()
{
   double a = 0, min = numeric_limits<double>::max(), max = numeric_limits<double>::min();
   int i = 0; //�������

   while (cin >> a)
   {
      if (i == 0)
      {
         max = a;
         cout << "���������� ����� ����� �������� " << a << endl;
         min = a;
         cout << "���������� ����� ����� �������� " << min << endl;
         ++i;
      }

      if (a >= max and i != 1)
      {
         max = a;
         cout << "���������� ����� ����� �������� " << a << endl;
      }

      if (a <= min and i != 1)
      {
         min = a;
         cout << "���������� ����� ����� �������� " << min << endl;
      }
      ++i;
   }
}
// �� ���� ��������, ���� �� �������� � ������

void task2() // ����� �� ��������!
{
   double a = 0, min = 0, max = 0, summ = 0;  // min = numeric_limits<double>::max(), max = numeric_limits<double>::min();
   int i = 0; //�������
   string unit1 = "";
   vector <double> v;

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

      if (i == 0 and unit1 == "cm" or i == 0 and unit1 == "m" or i == 0 and unit1 == "ft" or i == 0 and unit1 == "in")
      {
         max = a;
         cout << "���������� ����� ����� �������� " << a << "m" << endl;
         min = a;
         cout << "���������� ����� ����� �������� " << min << "m" << endl;
         ++i;
      }

      if (a >= max and i != 1 and unit1 == "cm" or a >= max and i != 1 and unit1 == "m" or a >= max
         and i != 1 and unit1 == "ft" or a >= max and i != 1 and unit1 == "in")
      {
         max = a;
         cout << "���������� ����� ����� �������� " << a << "m" << endl;
      }

      if (a <= min and i != 1 and unit1 == "cm" or a <= min and i != 1 and unit1 == "m" or a <= min
         and i != 1 and unit1 == "ft" or a <= min and i != 1 and unit1 == "in")
      {
         min = a;
         cout << "���������� ����� ����� �������� " << min << "m" << endl;
      }

      ++i;

      if (unit1 == "cm" or unit1 == "m" or unit1 == "ft" or unit1 == "in")
      {
         summ += a;
         v.push_back(a);
      }
   }

   sort(v.begin(), v.end());

   for (int i1 = 0; v.size() > i1; ++i1)
   {
      cout << v[i1] << "  " << "m" << endl;
   }

   cout << "\n" << "����� ���� �������� ������� ����� : " << summ;
}

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

      for (int i = 0; i < temps.size(); ++i) sum += temps[i];
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

void ex4()
{
   int x = 50, divmin = 25;
   string choise = "", ranswer = "no";

   while (ranswer == "no" and 0 < x and x < 100)
   {
      cout << "���� ����� ������ " << x << "?" << endl;
      cin >> choise;

      if (choise == "yes" and 0 < x and x < 100)
      {
         x += divmin; // ����� ����������� � ������� �������
         cout << "���� ����� " << x << "?" << endl;
         cin >> ranswer;
         divmin /= 2;
      }
      else if (choise == "no" and 0 < x and x < 100)
      {
         x -= divmin; // ����� ����������� � ������� �������
         cout << "���� ����� " << x << "?" << endl;
         cin >> ranswer;
         divmin /= 2;
      }
   }
   cout << "���������� ���� �����: " << x << endl;
}

std::unordered_map<std::string, std::function<void()>> TASKS_MAP =
{
   {"0", prelude},
   {"101", task101},
   {"1", task1},
   {"2", task2},
   {"ex2", ex2},
   {"ex3", ex3},
   {"ex4", ex4}
};

int main()
{
   setlocale(LC_ALL, "Rus");

   std::string task_name;
   std::cout << "������� ����� ����� : ";
   std::cin >> task_name;
   TASKS_MAP[task_name]();
}