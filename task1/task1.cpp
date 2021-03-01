#include <iostream>
#include <cmath>
using namespace std;
bool result;
bool isInArea(double x, double y)
{
	if (x >= -1 && x <= 1 && y >= -1 && y <= 1)
		if (x >= -1 && x <= 0 && y >= 0 && y <= 1)
				return false;
			else
				return true;
	//return true;
}
void main()
{
	double x, y;
	cout << "Enter x = "; cin >> x;
	cout << "Enter y = "; cin >> y;
	result = isInArea(x, y);
	if (result == true) cout << "The point is in area" << endl;
	else cout << "The point is not in area" << endl;
}