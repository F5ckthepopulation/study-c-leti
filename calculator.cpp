#include <iostream>


using namespace std;




int main() {
	setlocale(LC_ALL, "RU");



	/* Просто создание рандомного числа
	srand(time(NULL));
	int result = 1 + rand() % 1000;
	cout << result << endl;*/





	//------------------------------------------------------------
	float num1, num2, result;
	cout << "Введи первое число  ";
	cin >> num1;

	cout << "Введи второе число  ";
	cin >> num2;
	//------------------------------------------------------------

	cout << "!!!Можно ввести только: +;-;*;/!!!" << endl;

	//------------------------------------------------------------
	char math;
	cout << "Введите мат. символ  ";
	cin >> math;
	//------------------------------------------------------------

	if (math == '+')
		result = num1 + num2;
	else if (math == '-')
		result = num1 - num2;
	else if (math == '*')
		result = num1 * num2;
	else if (math == '/')
		result = num1 / num2;
	//------------------------------------------------------------
	cout << "Результат: " << result << endl;
	











	return 0;
}