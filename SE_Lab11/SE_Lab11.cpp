#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

//Доп 2
auto true_or_false = [](auto x) {
	if (x < 0)
		return false;
	if ((int)x > 127)
		return false;
	else
		return true;
};

int main() {
	setlocale(LC_ALL, "RUS");
	vector<int> v{ 1, 2, 3, 4, 5, 6, 7, 8, 9 , 10 };

	int target1 = 3;
	int num_items1 = count(v.begin(), v.end(), target1);
	cout << "Число: " << target1 << " количество " << num_items1 << '\n';

	//Лямбда-выражение для подсчёта элементов, кратных 3
	int num_item3 = count_if(v.begin(), v.end(), [](int i) {return i % 3 == 0; });
	cout << "Количество элементов кратных 3 " << num_item3 << '\n';
	cout << endl << "Лямбда, захват переменных" << endl;

	//Лямбда-выражение, захват переменных
	for (auto i : v)[i]() {if (i % 3 == 0) cout << i << " "; }();
	cout << endl << " Лямбда с параметрами" << endl;

	//Вывод значений, кратных 3, передача аргументов как в обычной функции
	for (auto i : v)[](auto i) {if (i % 3 == 0) cout << i << " "; }(i);
	cout << endl << " Лямбда без параметров" << endl;

	//Вывод значений, кратных 3, через захват переменных
	for (auto i : v)[i] {if (i % 3 == 0)cout << i << " "; }();

	cout << "\n\n\n";



	//Доп 1
	float z = -5;

	if ([](auto y) {if (y >= 0) { return true; } else { return false; }}(z))
		cout << "true\n";
	else
		cout << "false\n";

	cout << "\n\n";

	//Доп 2
	cout << true_or_false(7) << endl;
	cout << true_or_false(-7) << endl;
	cout << true_or_false('a') << endl;
	cout << true_or_false('п') << endl;
	cout << "\n";

	//Доп 3 
	char str1[60] = "Dima", str2[] = "Trubach";
	[](auto& x, auto& c) { strcat_s(x, c); cout << x << endl; }(str1, str2);
	cout << "\n";

	//Доп 4
	[](auto& x, auto& c) { if (strlen(x) > strlen(c)) { cout << x; } else { cout << c; }} (str1, str2);
	cout << "\n";

	return 0;
}