#pragma once
#include <vector>
#include "Tile.hpp"
class Map
{
public:
	Map();
	~Map();
	Tile* at(int _x, int _y);
private:
	std::vector<std::vector<Tile *>> __map;
};

