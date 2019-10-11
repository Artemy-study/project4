#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double funcY(double);
double funcS(double);
double funcYS(double);
void Out_Rez(double func, double x, double a, double b, double h, int n);

int main()
{
	double a, b, h;
	int i, n;
	cout << "Enter the variables a, b, h, n: " << endl;
	cin >> a >> b >> h >> n;
	cout << "Choose the function that you want to calculate: 0 - Y(x), 1 - S(x), 2 - |Y(x) - S(x)|";
	cin >> i;
	switch (i)
	{
	case 0: Out_Rez(funcY, a, b, h, n); break;
	case 1: Out_Rez(funcS, a, b, h, n); break;
	case 2: Out_Rez(funcYS, a, b, h, n); break;
	}
	return 0;
}

double funcY(double x, int k) 
{
	return -log(sqrt(1 + x * x)) + x * atan(x);
}

double funcS(double x, int k)
{
	return pow(-1, k + 1) * pow(x, 2 * k) / (2 * k * (2 * k - 1));
}

double funcYS(double x, int k)
{
	return -log(sqrt(1 + x * x) + x * atan(x) - (pow(-1, k + 1) * pow(x, 2 * k) / (2 * k * (2 * k - 1))));
}

void Out_Rez(double func, double a, double b, double h, int n)
{
	
}