#include <iostream>
#include <obj/world.h>
#include <obj/container.h>
#include <obj/item.h>
#include <obj/room.h>
#include <obj/mob.h>

using namespace std;

world::world()
{
	set_name("Dungeon");
	set_desc("Icky dungeon :(");

	room start;
	mob player(&start);
	item hat(&start);

	start.set_name("Starting Point");
	start.set_desc("The room you start out in.");

	player.set_name("Player One");
	player.set_desc("You don't know what you look like? Perhaps you should try a mirror.");

	hat.set_name("Hat");
	hat.set_desc("A somewhat ugly hat.");

	start.list_contents();
	player.list_contents();

	hat.move(&player);

	cout << "\nAfter moving the hat to the player:\n\n";

	start.list_contents();
	player.list_contents();
}