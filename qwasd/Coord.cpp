#include "Coord.hpp"



Coord::Coord(){}

Coord::Coord(int _x, int _y)
{
	this->__x = _x; this->__y = _y;
}


Coord::~Coord(){}

int Coord::x()
{
	return this->__x;
}

int Coord::y()
{
	return this->y;
}

void Coord::x(int _x)
{
	this->x = _x;
}

void Coord::y(int _y)
{
	this->y = _y;
}

Coord Coord::operator+(Coord rhs)
{
	return Coord(this->__x + rhs.__x, this->__y + rhs.__y);
}

Coord Coord::operator-(Coord rhs)
{
	return Coord(this->__x - rhs.__x, this->__y - rhs.__y);
}

int Coord::area()
{
	return this->__x*this->__y;
}
