// Lab_03_2.cpp
// ��������� ����
// ����������� ������ � 3.3
// ������������, ������ �������� �������.
// ������ 15
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	double x; //������� ��������
	double y; //������� ��������
	double r1;//������� ��������
	double r2;//������� ��������
	double r;//������� ��������
	cout << "x= ";
	cin >> x;
	cout << "r1 = ";
	cin >> r1;
	cout << "r2 = ";
	cin >> r2;
	cout << "r= ";
	cin >> r;
	if (x <= -6)
		y = r2 / 2;
	else
		if (x >= -6 && x <= 2 * r2)
			y = (r2 / 2) + (1. / 16 * (x))+3;
		else
			if (x >= -2 * r2 && x <= 0)
				y = sqrt(r * r - (x - r2) * (x - r2));
			else
				if (x >= 0 && x <= 2 * r1)
					y = r - sqrt((r1 * r1) - (x * x));
				else
					y = -5 * r1 + 2*x;
	cout << "y= " << y;
}