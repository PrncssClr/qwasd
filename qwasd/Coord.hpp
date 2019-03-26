#pragma once
class Coord
{
public:
	Coord();
	Coord(int _x, int _y);
	~Coord();
	int x();
	int y();
	void x(int _x);
	void y(int _y);
	Coord operator+(Coord rhs);
	Coord operator-(Coord rhs);
	int area();
private:
	int __x = 0, __y = 0;
};

