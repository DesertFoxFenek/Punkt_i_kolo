#pragma once
class Point
{
	float x, y; //wsp�rz�dne
public:
	Point() //konstruktor
	{
		x = 0;
		y = 0;
	}

	void U_Point(); //metoda pobieraj�ca x,y
	void WU_Point(); //metoda pokazuj�ca �rodek x,y
};