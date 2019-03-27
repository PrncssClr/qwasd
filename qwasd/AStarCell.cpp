#include "AStarCell.hpp"



AStarCell::AStarCell()
{
}


AStarCell::~AStarCell()
{
}

AStarCell * AStarCell::parent()
{
	return __parent;
}

void AStarCell::parent(AStarCell * _parent)
{
	__parent = _parent;
}

bool AStarCell::isDestination()
{
	return __isDestination;
}

bool AStarCell::isChecked()
{
	return __isChecked;
}

void AStarCell::check()
{
	__isChecked = true;

}

void AStarCell::uncheck()
{
	__isChecked = false;
	__parent = nullptr;
}
