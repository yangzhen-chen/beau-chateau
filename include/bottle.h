#pragma once
#include <exception>
#include "item.h"
#include "creature.h"
#include "monster.h"
enum class BottleType
{
	bloodBottle=0,
	manaBottle,
	poison
};
class Bottle : public Item
{
public:
	unsigned increased;
	BottleType type;
	Bottle();
	Bottle(BottleType, unsigned increased);
	bool use(Creature* target);
	ItemType getItemType() override;
	std::string getInfo() override;
	// void interactiveThis() override;
};
 