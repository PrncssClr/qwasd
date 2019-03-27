#include "Map.hpp"



Map::Map()
{
}

Map::Map(Coord _size)
{
	__size = _size;
}

Map::~Map()
{
	for (int x = __map.size(); x > 0; x--)
	{
		std::vector<Tile *> _x = __map[x-1];
		for (int y = _x.size(); y > 0; y--) {
			_x.pop_back();
		}
		__map.pop_back();
	}
}

Tile* Map::at(int _x, int _y)
{
	return __map.at(_x).at(_y);
}

void Map::generate()
{

	//create the canvas

	for (int x = 0; x < __size.x(); x++)
	{
		std::vector<Tile *> _x;
		for (int y = 0; y < __size.y(); y++)
		{
			_x.push_back(&Tile(Coord(x, y), this));
		}
		__map.push_back(_x);
	}

	//pick a Seed coordinate

	//form a room around Seed

	//pick random coordinates until a w____ Tile::Type is chosen
		//Tile* considerant;
		//while(((considerant = __map.at(rand()%__size.x(),rand()%__size.y())).type() & 15)==0){}

	//decide whether to build room or hall
		//build the thing

	//loop for a while

	//build any special structures

}

int Map::makeRoom(Tile * _ingress)
{
	//do stuff. It's bedtime
	return 0;
}
