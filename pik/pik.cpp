#include <iostream>
#include "Circle.h" // załączenie pliku nagłówkowego klasy Circle
#include "Point.h" // załączenie pliku nagłówkowego klasy Point

using namespace std;

int main()
{
    system("chcp 1250");
    system("cls");

    Circle ob1; //utworzenie nowego objektu
    ob1.D_Circle(); //wywołanie metody pobierającej promień na obiekcie
    ob1.Show(); //wywołanie metody na obiekcie w celu ukazania wyniku

    return 0;
}