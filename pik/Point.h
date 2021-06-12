#pragma once
class Point
{
	float x, y; //wspó³rzêdne
public:
	Point() //konstruktor
	{
		x = 0;
		y = 0;
	}

	void U_Point(); //metoda pobieraj¹ca x,y
	void WU_Point(); //metoda pokazuj¹ca œrodek x,y
};