﻿#include <iostream>
#include <math.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int g;
	cout << "Какое задание вы хотите проверить? Введите цифру:\n" <<
		"1. Даны стороны прямоугольника a и b. Найти его площадь S = a•b и периметр P = 2•(a + b).\n" <<
		"2. Дан диаметр окружности d. Найти ее длину L = π•d. В качестве значения π использовать 3.14.\n" <<
		"3. Даны два числа a и b. Найти их среднее арифметическое: (a + b)/2.\n" <<
		"4. Даны два ненулевых числа. Найти сумму, разность, произведение и частное их квадратов.\n" <<
		"5. Даны два ненулевых числа. Найти сумму, разность, произведение и частное их модулей.\n";
	cin >> g;
	switch (g) {
	case 1:
		int a, b;
		cout << "Введите два числа\n";
		cin >> a >> b;
		int S, P;
		S = a * b;
		P = 2 * (a + b);
		cout << "Площадь рана: " << S << "\nПериметр равен: " << P;
		break;
	case 2:
		cout << "Введите диаметр окружности: ";
		int d;
		cin >> d;
		double p, L;
		p = 3.14;
		L = p * d;
		cout << "Площадь окружности равна: " << (float)L;
		break;
	case 3:
		cout << "Введите два числа: ";
		int y;
		float x;
		cin >> y >> x;
		float F;
		F = (y + x) / 2;
		cout << "Среднее арифметическое двух числе равно: " << (float)F;
		break;
	case 4:
		cout << "Введите два ненулевых значения: ";
		float k, h;
		cin >> k >> h;
		if (k!=0 and h!=0) {
			int summa, pr, r;
			float ch;
			summa = k * k + h * h;
			pr = k * k * h * h;
			r = k * k - h * h;
			ch = (float)(k * k / (h * h));
			cout << "Сумма квадратов: " << summa << "\nРазность квадратов: " << r << "\nПроизведение квадратов: " << pr << "\nЧастное квадратов: " << ch;
		}else {
			cout << "Ошибка, написано же ввести ненулевое число...";
		}
		break;
	case 5:
		cout << "Введите два ненулевых значения: ";
		float a1, b1;
		cin >> a1 >> b1;
		if (a1!=0 and b1!=0) {
			int summa1, pr1, r1;
			float ch1;
			summa1 = abs(a1) + abs(b1);
			pr1 = abs(a1) * abs(b1);
			r1 = abs(a1) - abs(b1);
			ch1 = (float)(fabs(a1) / fabs(b1));
			cout << "Сумма модулей: " << summa1 << "\nРазность модулей: " << r1 << "\nПроизведение модулей: " << pr1 << "\nЧастное модулей: " << ch1;
		} else {
		cout << "Ошибка, написано же ввести ненулевое число... Уже не смешно!!!";
		}
		break;
	default:
		cout << "Зачем вводить то, чего нет?!";
		break;
	}


}