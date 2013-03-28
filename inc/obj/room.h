#ifndef ADVENTURE_ROOM_H
#define ADVENTURE_ROOM_H

#include <obj/container.h>

class room: public container
{
public:
	room(container& parent);
};

#endif
