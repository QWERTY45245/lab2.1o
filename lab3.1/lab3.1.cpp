#include<iostream>
#include<cmath>>
using namespace std;
int main()
{
	double ctg;
	double x; // ������� ��������
	double y; // ��������� ���������� ������
	double A; // �������� ��������� - ������������� ����� ������� ������
	double B; // �������� ��������� - ������������� ����� ������� ������
	cout << "x = "; cin >> x;
	ctg = cos((1 + log(x) / 3)) / sin((1 + log(x) / 3));
	A = 2+6*x;
	// ����� 1: ������������ � ��������� ����
	if (x <= 0)
		B = log(cos(x))+(x*x*x*x*x);
	if (0 < x && x <= 3)
		B = ctg;
	if (x > 3)
		B = (12*x)-(x*x*x*x*x*x*x*x);
	y = A + B;
	cout << endl;
	cout << "1) y = " << y << endl;
	// ����� 2: ������������ � ����� ����
	if (x <= 0)
		B = log(cos(x)) + (x * x * x * x * x);
	else
		if (x > 3)
			B = (12 * x) - (x * x * x * x * x * x * x * x);
		else
			B = ctg;
	y = A + B;
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
}
