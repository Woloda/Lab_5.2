// 2 - й спосіб : double - функції

// Lab_5.2(1).cpp
// Дорожовець Володимир 
// Лабораторна робота № 5.2(1)
// Обчислення суми ряду Тейлора за допомогою функцій.
// Варіант 0.6    
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double h(const double x, const double ln, int& n, double s);
double q(const double x, const int n, double a);

int main()
{
	double xp, xk, x, dx, ln, s = 0;
	int n = 0;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "ln = "; cin >> ln;
	cout << fixed;
	cout << "-------------------------------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(10) << "log(1-x)" << " |"
		<< setw(7) << "S" << " |"
		<< setw(5) << "n" << " |"
		<< endl;
	cout << "-------------------------------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		s = h(x, ln, n, s);
		cout << "|" << setw(7) << setprecision(2) << x << " |"
			<< setw(10) << setprecision(5) << log(1 - x) << " |"
			<< setw(10) << setprecision(5) << -s << " |"
			<< setw(5) << n << " |"
			<< endl;
		x += dx;
	}
	cout << "-------------------------------------------------" << endl;
	return 0;
}
double h(const double x, const double ln, int& n, double s)
{
	n = 1;
	double a = x;
	s = a;
	do {
		n++;
		a = q(x, n, a);
		s += a;
	} while (abs(a) >= ln);
	return s;
}
double q(const double x, const int n, double a)
{
	double R = x * 1.0 * (n * 1.0 - 1) / n * 1.0;
	a *= R;
	return a;
}
