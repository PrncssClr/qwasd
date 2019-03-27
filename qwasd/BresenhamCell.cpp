#include "BresenhamCell.hpp"



BresenhamCell::BresenhamCell()
{
}


BresenhamCell::~BresenhamCell()
{
}

bool BresenhamCell::isTransparent()
{
	return __transparent;
}

void BresenhamCell::isTransparent(bool _trans)
{
	__transparent = _trans;
}

bool BresenhamCell::isVisible()
{
	return __visible;
}

void BresenhamCell::isVisible(bool _visible)
{
	__visible = _visible;
}
