#include "Point.h"
#include <iostream>

using namespace std;

void Point::U_Point() //metoda pobieraj�ca x,y
{
    cout << "Podaj x: ";
    cin >> x;
    cout << "Podaj y: ";
    cin >> y;
}

void Point::WU_Point() //metoda pokazuj�ca �rodek x,y
{
    cout << "�rodek okr�gu znajduje si� na:" << endl;
    cout << "x: " << x << endl << "y: " << y << endl;
}
