#include <obj/room.h>
#include <obj/container.h>

room::room()
{}

room::room(container* parent): container(parent)
{}