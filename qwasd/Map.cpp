#include "Map.hpp"



Map::Map()
{
}


Map::~Map()
{
}

Tile* Map::at(int _x, int _y)
{
	return __map.at(_x).at(_y);
}
