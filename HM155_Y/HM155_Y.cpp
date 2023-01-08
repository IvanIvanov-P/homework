#include "../Hello, world!/std_lib_facilities.h"
#include <functional>

void task1

std::unordered_map<std::string, std::function<void()>> TASKS_MAP =
{
   {"1", task1},
   {"2", task2},
   {"3", task3},
   {"4", task4}
};

int main()
{
	std::string task_name;
	std::cin >> task_name;
	TASKS_MAP[task_name]();
}