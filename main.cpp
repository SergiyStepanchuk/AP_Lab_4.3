// Степанчук Сергій 
// Лабораторна робота № 4.3
// Табуляція функції, заданої формулою: функція з параметрами
// Варіант 20

#include <iostream> 
#include <iomanip>

using namespace std;

void main() {
	double x, x_end, x_delta, f, a, b, c;

	cout.setf(ios::left);
	cout << setw(10) << "x start" << " = "; cin >> x;
	cout << setw(10) << "x end" << " = "; cin >> x_end;
	cout << setw(10) << "x delta" << " = "; cin >> x_delta;
	cout << setw(10) << "a" << " = "; cin >> a;
	cout << setw(10) << "b" << " = "; cin >> b;
	cout << setw(10) << "c" << " = "; cin >> c;

	cout << "--------------------------------" << endl; // 32
	cout << "|" << setw(14) << "x" << " |" << setw(14) << "f" << "|" << endl; // 14
	cout << "--------------------------------" << endl; // 32

	cout << fixed;
	for (; x <= x_end; x += x_delta)
	{
		if (x < 0 && b != 0)
			f = -(2 * x - x) / (c * x - a);
		else if (x > 0 && b == 0)
			f = (x - a) / (x - c);
		else
			f = -(x / c) + (-c) / (2 * x);

		cout << "|" << setprecision(2) << setw(14) << x << " |" << setw(14) << setprecision(3) << f << "|" << endl;
		cout << "--------------------------------" << endl; // 32
	}
}