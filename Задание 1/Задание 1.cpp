#include <iostream>

#define MODE 1

int main() {
	setlocale(LC_ALL, "Russian");


#if defined (MODE) 
#if (MODE == 1)
	std::cout << "Работаю в боевом режиме" << std::endl;
	int num1;
	int num2;
	std::cout << "Введите число 1: ";
	std::cin >> num1;
	std::cout << "Введите число 2: ";
	std::cin >> num2;
	std::cout << "Результат сложения: " << num1 + num2 << std::endl;

#elif (MODE == 0) 
	std::cout << "Работаю в режиме тренировки" << std::endl;


#endif
#endif

#if !defined (MODE)
#error Error! It is necessary to determine the value of the indicator
#endif

return 0;
}
