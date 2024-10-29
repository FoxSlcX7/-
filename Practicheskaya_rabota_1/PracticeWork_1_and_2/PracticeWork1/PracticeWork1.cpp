#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	double metres, kilometres;

	do
	{
		cout << "Введите расстояние в метрах : ";
		cin >> metres;
		cout << "Введите расстояние в километрах : ";
		cin >> kilometres;
	} while ( metres < 0 || kilometres < 0);

	if (metres == kilometres * 1000)
		cout << "Расстояние равны";
	else if (metres < kilometres * 1000.0)
		cout << "Наименьшее введённое растояние : " << metres << "м";
	else
		cout << "Наименьшее введённое растояние : " << kilometres << "км";
}

///Записал все задания в одном решении
//
///Task 1
// 
/* 
	setlocale(LC_ALL, "");

	int a, b;

	cout << "Введите число а (делитель): ";
	cin >> a;
	cout << "Введите число b (делимое): ";
	cin >> b;

	cout << "Число " << a << (b % a == 0 ? " является " : " не является ") << "делителем числа " << b;
*/
///Task 2
//
/*
	setlocale(LC_ALL, "");

	int number;

	cout << "Введите число: ";
	cin >> number;
	cout << "Это число которое вы ввели <" << number << ">";
*/
//
///Task 3
// 
/*
	setlocale(LC_ALL, "");

	int numberN, numberM;

	cout << "Введите число n: ";
	cin >> numberN;
	cout << "Введите число m: ";
	cin >> numberM;

	if (numberM > numberN)
	{
		cout << "Число " << numberM << " > " << numberN;
	}
	else if (numberM < numberN)
	{
		cout << "Число " << numberM << " < " << numberN;
	}
	else
	{
		cout << "Числа равны";
	}
*/
//
///Task 4
//
/*
	setlocale(LC_ALL, "");

	int radius;

	cout << "Введите радиус окружности: ";
	cin >> radius;

	cout << "Диаметр окружности равен: " << radius * 2;
*/
///Task 5
//
/*
	setlocale(LC_ALL, "");
 
	int numberA, sumNumA = 0, sumNum100 = 0;

	do {
		cout << "Введите число a: ";
		cin >> numberA;
	} while (!(numberA >= 0 && numberA < 500));


	for (int i = 1; i <= 500; i++) {
		if (i >= numberA) {
			sumNumA += i;
		}
		if (i >= 100) {
			sumNum100 += i;
		}
	}

	cout << "Сумма чисел от 100 до 500: " << sumNum100 << endl;
	cout << "Сумма числе от " << numberA << " до 500: " << sumNumA;
*/
//
///Task 6
//
/*
	int number;
	setlocale(LC_ALL, "");

	do
	{
		cout << "Введите расстояние в метрах : ";
		cin >> number;
	} while (number < 0);

	cout << "Расстояние в метрах : " << number << "м" << endl;
	cout << "Расстояние в сантиметрах : " << number * 100 << "см";
*/
//
///Task 7
//
/*
	setlocale(LC_ALL, "");

	double metres, kilometres;

	do
	{
		cout << "Введите расстояние в метрах : ";
		cin >> metres;
		cout << "Введите расстояние в километрах : ";
		cin >> kilometres;
	} while ( metres < 0 || kilometres < 0);

	if (metres == kilometres * 1000)
		cout << "Расстояние равны";
	else if (metres < kilometres * 1000.0)
		cout << "Наименьшее введённое растояние : " << metres << "м";
	else
		cout << "Наименьшее введённое растояние : " << kilometres << "км";
*/
