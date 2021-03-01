#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
using namespace std;
void main()
{
	double f, x;
	x = 5;
	f = sqrt((x + 3) / (x - 3));
	cout << fixed << setprecision(4) << "Result 1 =  " << f << "\n";
	cout << "Inserts X" << "\n";
	cin >> x;
	f = sqrt((x + 3) / (x - 3));
	cout << fixed << setprecision(4) << "Result 2 =  " << f;
}