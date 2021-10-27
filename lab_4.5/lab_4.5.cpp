// lab_4.5.cpp
// Кобетяк Андрій
// Лабораторна робота № 4.5
// «Попадання» у плоску фігуру
// Варіант 12


#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

int main()
{
	double x, y, R;

	cout << "R = "; cin >> R;

	srand((unsigned) time(NULL)); 

	for(int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		if ((0 <= y && y <= R && -1 * R <= x && x <= 0 && (x + R) * (x + R) + (y - R) * (y - R) >= R * R) ||
			(0 <= x && x <= R && -1 * R <= y && y <= 0 && (x - R) * (x - R) + (y + R) * (y + R) >= R * R))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}

	cout << endl << fixed;

	for(int i = 0; i < 10; i++)
	{
		x = 2. * R * rand() / RAND_MAX - R;
		y = 2. * R * rand() / RAND_MAX - R;

		if ((0 <= y && y <= R && -1 * R <= x && x <= 0 && (x + R) * (x + R) + (y - R) * (y - R) >= R * R) ||
			(0 <= x && x <= R && -1 * R <= y && y <= 0 && (x - R) * (x - R) + (y + R) * (y + R) >= R * R))
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
		else
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "no" << endl;
	}
	return 0;
}