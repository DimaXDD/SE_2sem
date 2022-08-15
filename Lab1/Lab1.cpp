#include <iostream>
#include <Windows.h>
#define chislo 9
using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a = 1, menu1(), menu2();

	do {
		//Главное меню
		menu1();
		char n;
		cin >> n;
		cout << "\n";
		//проверка на ввод корректного варианта
		while ('2' < n || n < '1') {
			system("cls");
			cout << "Вы ввели некорректный вариант выполнения\n\n\n";
			menu2();
			cin >> n;
			cout << "\n";
		}
		system("cls");
		//Варианты выполнения программы----------------------------------------------------------------------------------------------

		switch (n) {

			//Информация о введённой Вами дате----------------------------------------------------------------------------------------

		case '1': {
			cout << "Введите дату в формате ДДММГГГГ: ";
			static char data[chislo];
			cin >> data;
			//Проверка корректности даты
			for (int i = 0; i < 8; i++) {

				if (data[i] > '9' || data[i] < '0') {
					system("cls");
					cout << "Вы некорректно ввели дату\n";
					cout << "Введите дату в формате ДДММГГГГ: ";
					cin >> data;
				}
			}
			int dol;
			//извлечение месяца из даты
			int mes = (data[2] - '0') * 10 + data[3] - '0';
			//извлечение дня из даты
			int den = (data[0] - '0') * 10 + data[1] - '0';
			//Доп проверка корректности даты
			int cel = 0;
			int god = (data[4] - '0') * 1000 + (data[5] - '0') * 100 + (data[6] - '0') * 10 + data[7] - '0';
			int Checking(int x, int y);
			while (Checking(god, cel) == 0 && mes == 2 && den >= 29) {
				system("cls");
				cout << "Вы некорректно ввели дату\n";
				cout << "Введите дату в формате ДДММГГГГ: ";
				cin >> data;
				//извлечение месяца из даты
				mes = (data[2] - '0') * 10 + data[3] - '0';
				//извлечение дня из даты
				den = (data[0] - '0') * 10 + data[1] - '0';
				god = (data[4] - '0') * 1000 + (data[5] - '0') * 100 + (data[6] - '0') * 10 + data[7] - '0';
			}
			while (data[0] > '3' || data[0] < '0' || mes > 12 || mes < 1 || den < 1 || den > 31) {
				system("cls");
				cout << "Вы некорректно ввели дату\n";
				cout << "Введите дату в формате ДДММГГГГ: ";
				cin >> data;
				//извлечение месяца из даты
				mes = (data[2] - '0') * 10 + data[3] - '0';
				//извлечение дня из даты
				den = (data[0] - '0') * 10 + data[1] - '0';
				god = (data[4] - '0') * 1000 + (data[5] - '0') * 100 + (data[6] - '0') * 10 + data[7] - '0';

			}
			//извлечение года из даты
			god = (data[4] - '0') * 1000 + (data[5] - '0') * 100 + (data[6] - '0') * 10 + data[7] - '0';
			system("cls");
			//Ввод даты рождения----------------------------------------------------------------------------------------------------

			cout << "Введите дату рождения в формате ДДММГГГГ: ";
			static char happy[chislo];
			cin >> happy;
			//Проверка корректности даты
			for (int i = 0; i < 8; i++) {

				if (happy[i] > '9' || happy[i] < '0') {
					system("cls");
					cout << "Вы некорректно ввели дату\n";
					cout << "Введите дату рождения в формате ДДММГГГГ: ";
					cin >> happy;

				}
			}
			//извлечение месяца из даты
			int meshappy = (happy[2] - '0') * 10 + happy[3] - '0';
			//извлечение дня из даты
			int denhappy = (happy[0] - '0') * 10 + happy[1] - '0';
			//Доп проверка корректности даты
			int Checking(int x, int y);
			int godhappy = (happy[4] - '0') * 1000 + (happy[5] - '0') * 100 + (happy[6] - '0') * 10 + happy[7] - '0';
			while (Checking(godhappy, cel) == 0 && meshappy == 2 && denhappy == 29) {
				system("cls");
				cout << "Вы некорректно ввели дату\n";
				cout << "Введите дату в формате ДДММГГГГ: ";
				cin >> data;
				//извлечение месяца из даты
				mes = (data[2] - '0') * 10 + data[3] - '0';
				//извлечение дня из даты
				den = (data[0] - '0') * 10 + data[1] - '0';
				godhappy = (happy[4] - '0') * 1000 + (happy[5] - '0') * 100 + (happy[6] - '0') * 10 + happy[7] - '0';
			}
			while (happy[0] > '3' || happy[1] < '0' || meshappy > 12 || meshappy < 1 || denhappy < 1 || denhappy > 31) {
				system("cls");
				cout << "Вы некорректно ввели дату\n";
				cout << "Введите дату рождения в формате ДДММГГГГ: ";
				cin >> happy;
				//извлечение месяца из даты
				meshappy = (happy[2] - '0') * 10 + happy[3] - '0';
				//извлечение дня из даты
				denhappy = (happy[0] - '0') * 10 + happy[1] - '0';
				godhappy = (happy[4] - '0') * 1000 + (happy[5] - '0') * 100 + (happy[6] - '0') * 10 + happy[7] - '0';
			}
			//извлечение года из даты
			godhappy = (happy[4] - '0') * 1000 + (happy[5] - '0') * 100 + (happy[6] - '0') * 10 + happy[7] - '0';

			//----------------------------------------------------------------------------------------------------------------------

			//Вывод информации о дате
			system("cls");
			cout << "Ваша введённая дата: " << den << ":" << mes << ":" << god << "\n";
			cout << "Ваш день рождения: " << denhappy << ":" << meshappy << ":" << godhappy << "\n";
			cout << "Характеристика введённой Вами даты\n";
			cel = 0;
			//Проверка на высокостность
			int Checking(int x, int y);
			if (Checking(god, cel) == 1) {
				cout << "Данный год является високостным\n";
			}
			else {
				cout << "Данный год не является високостным\n";
			}
			//Вычисление порядкового номера дня в году
			int quantity(int x, int y, int z);
			cout << "Введённый Вами день является " << quantity(mes, den, Checking(god, cel)) << " в году\n";

			//Вычисление количества дней до Вашего ближайшего дня рождения

			if (quantity(mes, den, Checking(god, cel)) < quantity(meshappy, denhappy, Checking(god, cel))) {

				int daycout = quantity(mes, den, Checking(god, cel));
				int dayhappys = quantity(meshappy, denhappy, Checking(god, cel));
				int colvoday = dayhappys - daycout;
				cout << "До ближайшего Вашего дня рождения " << colvoday << " дня(ей)\n";
			}
			else if (quantity(mes, den, Checking(god, cel)) == quantity(meshappy, denhappy, Checking(god, cel))) {
				cout << "Поздравляю, у Вас сегодня день рождения\n";
			}
			else {

				int daycout = quantity(mes, den, Checking(god, cel));
				int jatgod = god + 1;
				int dayhappys = quantity(meshappy, denhappy, Checking(jatgod, cel));
				int daygod = 365 + Checking(god, cel);
				int daystar = daygod - daycout;
				int colvoday = dayhappys + daystar;
				cout << "До ближайшего Вашего дня рождения " << colvoday << " дня(ей)\n";
			}
			cout << "\n\n";
			system("pause");
			system("cls");
			break;
		}
				//Выход из программы :(---------------------------------------------------------------------------------------------

		case '2': {
			system("cls");
			cout << "Программа завершена\n";
			return 0;
		}
		}
	} while (a != 0);
	return 0;
}

//Функции---------------------------------------------------------------------------------------------------------------------------

//Главное меню
int menu1() {
	using namespace std;
	cout << "Привет, выбери вариант выполнения программы:\n";
	cout << "1 - Информация о введённой Вами дате\n";
	cout << "2 - Выход из программы\n";
	cout << "\n";
	cout << "Ваш вариант выполнения программы: ";
	return 0;
};

//Возвращение в меню
int menu2() {
	int menu1();
	using namespace std;
	system("cls");
	cout << "Вы ввели некорректный вариант выполнения\n";
	menu1();
	return 0;
};

//Функция проверки года на высокостность
int Checking(int x, int y) {
	using namespace std;
	if (x % 4 == 0 && x % 400 != 100 && x % 400 != 200 && x % 400 != 300) {
		y = 1;
	}
	else {
		y = 0;
	}
	return y;
}

//Функция вычисляющая порядковый номер введенного дня
int quantity(int x, int y, int z) {
	using namespace std;
	int Mounthes[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int sumday = 0;
	if (z == 1) {
		Mounthes[1] = 29;
	}
	for (int i = 0; i < x - 1; i++) {
		sumday = sumday + Mounthes[i];
	}
	sumday = sumday + y;

	return sumday;
}
