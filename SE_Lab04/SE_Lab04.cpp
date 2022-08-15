#include <iostream>
using namespace std;
string visok;
int temp_visok = 0; // если високосный, то == 1
int mes[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
int count(int day, int month, int mes[]);
int prov(int god, int month, int day);
void visok_god(int god);
void nazv(int);
int main()
{
	setlocale(LC_ALL, "Russian");
	int c;
	int god, data, month, pust, temp1, day, day1, month1, data1, por = 0;
	cout << "Введите дату:  "; cin >> data;
	pust = data;
	god = data % 10000;
	data = pust;
	month = ((data - god) / 10000) % 100;
	day = ((data - god) / 10000 - month) / 100;
	visok_god(god);
	if (prov(god, month, day) == 1) {
		cout << "\nНекорректно введена дата";
		return 0;
	}

	do
	{
		cout << endl;
		cout << "Введите: " << endl;
		cout << "1 - Определить, является ли введенный год ГГГГ високосным" << endl;
		cout << "2 - Вычислить порядковый номер введенного дня в году ГГГГ" << endl;
		cout << "3 - Вычислить сколько дней осталось до ближайшего дня вашегo рождения" << endl;
		cout << "4 - Опеределить название месяца" << endl;
		cout << "5 - Определить, когда день программиста" << endl;
		cout << "6 - Выход" << endl; cin >> c;
		switch (c)
		{
		case 1: //проверка на високосный год
			cout << visok;
			break;
		case 2: // вычисл  порядков номер
			por = count(day, month, mes);
			cout << "\tПорядковый номер: " << por;
			break;
		case 4:
			nazv(month);
			break;

		case 5:
			if (temp_visok == 1)
				cout << "\tДень программиста 12 сентября" << endl;
			else
				cout << "\tДень программиста 13 сентября" << endl;


			break;

		case 3: // вычисл сколько дней до ближ дня рождения 
			cout << "Введите дату и месяц дня рождения: ";
			cin >> data1;
			int por = count(day, month, mes);
			temp1 = data1;
			month1 = data1 % 100;
			day1 = (temp1 - month1) / 100;
			if (prov(god, month1, day1) == 1) {
				cout << "\nНекорректно введена дата";
				return 0;
			}
			int a = count(day1, month1, mes); //какой номер нашего дня рождения
			cout << "\tДо дня рождения осталось: " << abs(a - por);
			break;


		}
	} while (c != 6);
}
void nazv(int month) { // функция названия месяца
	string name[] = { "Январь", "Февраль", "Март", "Апрель", "Май", "Июнь", "Июль", "Август", "Сентябрь", "Октябрь", "Ноябрь", "Декабрь" };
	cout << "Название месяца: " << name[month - 1] << endl;
}

int prov(int god, int month, int day) {
	int a = 0;
	if (god <= 1000 || month <= 00 || month > 12 || day <= 00 || day > mes[month - 1])
		a = 1;


	return (a);
}

int count(int day, int month, int mes[]) {
	int temp_visok = 0;
	for (int i = 0; i < month - 1; i++)
		temp_visok += mes[i];
	temp_visok += day;
	return temp_visok;
}

void visok_god(int god) {
	if (god % 4 != 0 || (god % 100 == 0 && god % 400 != 0)) {
		visok = "\tНе високосный год ";
	}
	else {
		visok = "\tВисокосный год ";
		mes[1]++;
		temp_visok = 1;
	}
}