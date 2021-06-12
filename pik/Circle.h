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

    void D_Circle(); //wywo³anie metody pobieraj¹cej promieñ na obiekcie
    void Show(); ////wywo³anie metody na obiekcie w celu ukazania wyniku
};

