// Lab_03_4.cpp
// < ������������ ����� >
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 5
#include <iostream>
using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ������� ��������
	double R;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;
	// ������������ � ����� ����
	if (y <= x * x - R * R && y <= 0 || y <= x + R && y >= 0 || y * y <= x * x - R * R && y >= 0)
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}