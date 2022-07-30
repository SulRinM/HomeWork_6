
#include <iostream>
#include "class_counter.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");

	std::string m;
	std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
	std::cin >> m;
	if (m == "да")
	{
		int val;
		std::cout << "Введите начальное значение счётчика: ";
		std::cin >> val;
		Counter count = Counter(val);
		bool flag = true;
		while (flag)
		{
			std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
			std::cin >> m;
			if (m == "+") {
				count.inc();
			}
			else if (m == "-") {
				count.dec();
			}
			else if (m == "=") {
				std::cout << count.get() << std::endl;
			}
			else if (m == "x") { // латиницей
				flag = false;
				std::cout << "До свидания!";
			}
		}
	}
	if (m == "нет")
	{
		Counter counter = Counter();
		bool flag = true;
		while (flag)
		{
			std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
			std::cin >> m;
			if (m == "+") {
				counter.inc();
			}
			else if (m == "-") {
				counter.dec();
			}
			else if (m == "=") {
				std::cout << counter.get() << std::endl;
			}
			else if (m == "x") { // латиницей
				flag = false;
				std::cout << "До свидания!";
			}
		}
	}

	return 0;
}


