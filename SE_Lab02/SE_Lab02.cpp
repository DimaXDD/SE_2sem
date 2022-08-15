#include "stdafx.h"


using namespace std;

int sum(int x, int y);
int sub(int x, int y);
int mul(int x, int y);



int main()
{
	setlocale(LC_ALL, "RUS");

	int a, b;
	cout << "Введите первое число: ";
	cin >> a;
	cout << "Введите второе число: ";
	cin >> b;
	cout << "\nСумма чисел = " << sum(a, b) << endl;
	cout << "Разность чисел = " << sub(a, b) << endl;
	cout << "Приизведение чисел = " << mul(a, b) << endl;

	system("pause");
}
