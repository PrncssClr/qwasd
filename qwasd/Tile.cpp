#include "Tile.hpp"

Tile::Tile()
{
}

Tile::Tile(Coord _c, Map * _map)
{
	this->__coord = _c;
	this->__map = _map;
}

Tile::~Tile()
{
}

Tile::Type Tile::type()
{
	return this->__type;
}

void Tile::type(Type _type)
{
	this->__type = _type;
}

Map* Tile::map()
{
	return this->__map;
}

Creature * Tile::creature()
{
	return this->__creature;
}

void Tile::creature(Creature * _creature)
{
	this->__creature = _creature;
}

Coord Tile::coord()
{
	return __coord;
}
