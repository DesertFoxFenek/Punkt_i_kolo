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

    void D_Circle(); //wywo�anie metody pobieraj�cej promie� na obiekcie
    void Show(); ////wywo�anie metody na obiekcie w celu ukazania wyniku
};

