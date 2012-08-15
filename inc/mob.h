#ifndef MOB_H
#define MOB_H

#include <container.h>
#include <room.h>

class mob: public container
{
	room* location;
public:
	mob();
	mob(container* parent);
};

#endif