#pragma once
#include <vector>
#include "Tile.hpp"
class Map
{
public:
	Map();
	Map(Coord _size);
	~Map();
	Tile* at(int _x, int _y);


private:
	std::vector<std::vector<Tile *>> __map;
	void generate();
	Coord exit;
	int make(Tile::Type _structure, Coord _bottomLeft, Coord _topRight, Coord _ingress);
	int makeRoom(Tile* _ingress);
	int makeHall(Tile* _ingress);
	int makeSpecial(Tile* _ingress);
	Coord __size = Coord(50, 50);
};

