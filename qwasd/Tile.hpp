#pragma once
#include "Coord.hpp"
#include "BresenhamCell.hpp"
#include "AStarCell.hpp"

class Creature;
class Map;

class Tile
{
public:
	enum Type
	{
		unused = 0,
		wNorth = 1,
		wSouth = 2,
		wEast = 4,
		wWest = 8,
		fRoom = 16,
		fHall = 32
	};
	Tile();
	Tile(Coord _c, Map* _map);
	~Tile();
	Type type();
	void type(Type _type);
	Map* map();
	Creature* creature();
	void creature(Creature* _creature);
	Coord coord();
private:
	BresenhamCell __bCell = BresenhamCell();
	AStarCell __aCell = AStarCell();
	Coord __coord = Coord(0, 0);
	Type __type = unused;
	Map* __map = nullptr;
	Creature* __creature = nullptr;
};

