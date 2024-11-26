//Листинг 2 ‐ Вычисление функции e^x по разложению в ряд Маклорена

#include <iostream>
using namespace std;
int main() {
	cout << "file. f0001_2" << endl;
	double x = 1;
	double a[2] = { 1, 0 };
	double Sa = a[0];
	
	double eps = 1;

	int n = 1;

	while (eps > 0.001)
	{
		eps = Sa;
		a[1] = a[0] * x / n;
		Sa += a[1];
		eps = Sa - eps;
		a[0] = a[1];
		n++;
	}
	cout << "e^x = f(x=1) = " << Sa << endl;
	return 0;
}