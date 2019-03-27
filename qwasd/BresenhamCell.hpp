#pragma once

class BresenhamCell
{
public:
	BresenhamCell();
	~BresenhamCell();
	bool isTransparent();
	void isTransparent(bool _trans);
	bool isVisible();
	void isVisible(bool _visible);

private:
	bool __transparent = false;
	bool __visible = false;
};

