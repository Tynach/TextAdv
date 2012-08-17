#include <iostream>
#include <world.h>
#include <container.h>
#include <item.h>
#include <room.h>
#include <mob.h>

using namespace std;

world::world()
{
	room start;
	mob player(&start);
	item hat(&start);

	start.set_name("Starting Point");
	start.set_desc("The room you start out in.");

	player.set_name("Player 1");
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