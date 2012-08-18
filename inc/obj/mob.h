#ifndef MOB_H
#define MOB_H

#include <obj/container.h>
#include <obj/room.h>

class mob: public container
{
	room* location;
public:
	mob();
	mob(container* parent);
};

#endif