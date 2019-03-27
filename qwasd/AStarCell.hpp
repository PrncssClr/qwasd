#pragma once
class AStarCell
{
public:
	AStarCell();
	~AStarCell();
	AStarCell* parent();
	void parent(AStarCell* _parent);
	bool isDestination();
	bool isChecked();
	void check();
	void uncheck();
private:
	AStarCell* __parent;
	bool __isDestination;
	bool __isChecked = false;
};

