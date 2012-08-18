#ifndef ROOM_H
#define ROOM_H

#include <obj/container.h>

class room: public container
{
public:
	room();
	room(container* parent);
};

#endif