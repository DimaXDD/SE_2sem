#include <iostream>
using namespace std;

//1
typedef unsigned char day;
typedef unsigned char month;
typedef unsigned int year;

struct  Date {
	day dd;
	month mm;
	year yyyy;
};
// перегрузка операторов 
bool operator==(Date d1, Date d2) {
	return ((d1.yyyy == d2.yyyy) && (d1.mm == d2.mm) && (d1.dd == d2.dd));
}

bool operator>(Date d1, Date d2) {
	return ((d1.yyyy > d2.yyyy) || ((d1.yyyy == d2.yyyy) && (d1.mm > d2.mm)) || ((d1.yyyy == d2.yyyy) && (d1.mm == d2.mm) && (d1.dd > d2.dd)));
}

bool operator<(Date d1, Date d2) {
	return ((d1.yyyy < d2.yyyy) || ((d1.yyyy == d2.yyyy) && (d1.mm < d2.mm)) || ((d1.yyyy == d2.yyyy) && (d1.mm == d2.mm) && (d1.dd < d2.dd)));
}

//2 контроль_знаний: дисциплина, форма_контроля (экзамен,зачет), максимальный_балл
typedef unsigned char discipline;
typedef unsigned char control;
typedef unsigned short max_ball;

struct Subject {
	discipline d;
	control c;
	max_ball b;
};

bool operator ==(Subject s1, Subject s2) {
	bool rezult;
	if (s1.c == s2.c) { rezult = true; }
	else { rezult = false; }
	return rezult;
}

bool operator >(Subject s1, Subject s2) {
	bool rezult;
	if (s1.b > s2.b) { rezult = true; }
	else { rezult = false; }
	return rezult;
}



int main()
{
	setlocale(LC_ALL, "rus");

	Date date1 = { 7,1,1980 };
	Date date2 = { 7,2,1993 };
	Date date3 = { 7,1,1980 };

	if (date1 < date2)
		cout << "Истина" << endl;
	else
		cout << "Ложь" << endl;

	if (date1 > date2)
		cout << "Истина" << endl;
	else
		cout << "Ложь" << endl;

	if (date1 == date2)
		cout << "Истина" << endl;
	else
		cout << "Ложь" << endl;

	if (date1 == date3)
		cout << "Истина" << endl;
	else
		cout << "Ложь" << endl;

	//2
	Subject s1 = { 'OAiP', 'exam', 5};
	Subject s2 = { 'AaSD', 'zach', 9};
	if (s1 == s2) { cout << "s1 и s2 имеют одну форму контроля\n"; }
	else { cout << "s1 и s2 имеют разую форму контроля\n"; }
	if (s1 > s2) { cout << "у s1 максимальный балл выше, чем у s2\n"; }
	else { cout << "у s2 максимальный балл выше, чем у s1\n"; }

	return 0;
}