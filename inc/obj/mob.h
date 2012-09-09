#ifndef MOB_H
#define MOB_H

#include <obj/container.h>
#include <obj/room.h>

class mob: public container
{
public:
	mob(container* parent);
};

#endif
