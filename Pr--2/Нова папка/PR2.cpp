#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний параметр
	double y; // вхідний параметр
	double z1; // результат обчислення 1-го виразу
	double z2; // результат обчислення 2-го виразу
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	z1 = (cos(x) * cos(x) * cos(x) * cos(x) + sin(y) * sin(y) + 0.25 * (sin(2 * x - 1) * sin(2 * x - 1)));
	z2 = (sin(y + x) * (sin(y - x)));
	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}
