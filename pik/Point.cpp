#include "Point.h"
#include <iostream>

using namespace std;

void Point::U_Point() //metoda pobieraj¹ca x,y
{
    cout << "Podaj x: ";
    cin >> x;
    cout << "Podaj y: ";
    cin >> y;
}

void Point::WU_Point() //metoda pokazuj¹ca œrodek x,y
{
    cout << "Œrodek okrêgu znajduje siê na:" << endl;
    cout << "x: " << x << endl << "y: " << y << endl;
}
