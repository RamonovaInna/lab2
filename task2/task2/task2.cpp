#include <iostream>
#include <cmath>
using namespace std;
double fun(double x)
{
	if (x <= 3)
		return pow(x, 2) - 3 * x + 9;
	else
		return 1 / (pow(x, 3) + 6);
}

int main()
{
	double x;
	cout << "Enter x = "; cin >> x;
	cout << "Result =  " << fun(x) << endl;
}