#include <iostream>
#include <math.h>
#include <locale>
using namespace std;

double fun(double x);
bool result;
bool isInArea(double x, double y);

void main()
{

	double x, y;
	int n;

	cout << "Choose the task: 1 or 2:\n";
	cout << "Task: ";
	cin >> n;


	switch (n)
	{
	case 1:
	{
		printf("Enter x: ");
		cin >> x;
		printf("Enter y: ");
		cin >> y;
		result = isInArea(x, y);
		if (result == true) cout << "The point is in area" << endl;
		else cout << "The point is not in area" << endl;


		break;
	}
	case 2:
	{
		cout << "Enter x: ";
		cin >> x;
		cout << "Result =  " << fun(x) << endl;

		break;
	}
	}

	system("pause");

}

bool isInArea(double x, double y)
{
	if (x >= -1 && x <= 1 && y >= -1 && y <= 1)
		if (x >= -1 && x <= 0 && y >= 0 && y <= 1)
			return false;
		else
			return true;
}


	double fun(double x)
	{
		if (x <= 3)
			return pow(x, 2) - 3 * x + 9;
		else
			return 1 / (pow(x, 3) + 6);
	}

