#define _USE_MATH_DEFINES //pobieranie wartoœci PI

#include "Circle.h"
#include <iostream>
#include <cmath>

using namespace std;

void Circle::D_Circle() //wywo³anie metody pobieraj¹cej promieñ na obiekcie
{
	cout << "Podaj d³ugoœæ promienia: ";
	cin >> r;
}

void Circle::Show() //wywo³anie metody na obiekcie w celu ukazania wyniku
{
	Point::U_Point(); //dziedziczenie metodu z klasy Point do pobrania x i y
	Point::WU_Point(); //dziedziczenie metody z klasy Point do pokazania wspó³rzêdnych

	cout << "Promieñ wynosi: " << r * r * M_PI;
}
