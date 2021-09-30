// Lab_03_4.cpp
// < Жураковський Артем >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 5
#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double R;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;
	// розгалуження в повній формі
	if (y <= x * x - R * R && y <= 0 || y <= x + R && y >= 0 || y * y <= x * x - R * R && y >= 0)
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}