#include "Point.h"

class Circle :
    public Point
{
    double r;
public:
    Circle() //konstruktor 
    {
        r = 0;
    }

    void D_Circle(); //wywołanie metody pobierającej promień na obiekcie
    void Show(); ////wywołanie metody na obiekcie w celu ukazania wyniku
};

