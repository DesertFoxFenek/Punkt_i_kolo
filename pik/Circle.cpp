#define _USE_MATH_DEFINES //pobieranie warto�ci PI

#include "Circle.h"
#include <iostream>
#include <cmath>

using namespace std;

void Circle::D_Circle() //wywo�anie metody pobieraj�cej promie� na obiekcie
{
	cout << "Podaj d�ugo�� promienia: ";
	cin >> r;
}

void Circle::Show() //wywo�anie metody na obiekcie w celu ukazania wyniku
{
	Point::U_Point(); //dziedziczenie metodu z klasy Point do pobrania x i y
	Point::WU_Point(); //dziedziczenie metody z klasy Point do pokazania wsp�rz�dnych

	cout << "Promie� wynosi: " << r * r * M_PI;
}
