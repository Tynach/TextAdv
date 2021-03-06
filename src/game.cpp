#include <cstdio>
#include <obj/world.h>
#include <obj/room.h>
#include <obj/mob.h>
#include <obj/item.h>

using std::printf;

int main(int argc, char *argv[])
{
	world* dungeon = new world();
	room* start = new room(*dungeon);
	mob* player = new mob(*start);
	item* hat = new item(*start);

	dungeon->set_name("Dungeon");
	dungeon->set_desc("Icky dungeon :(");

	start->set_name("Starting Point");
	start->set_desc("The room you start out in.");

	player->set_name("Player One");
	player->set_desc("You don't know what you look like? Perhaps you should try a mirror.");

	hat->set_name("Hat");
	hat->set_desc("A somewhat ugly hat.");

	start->list_contents();
	player->list_contents();

	hat->move(*player);

	printf("After moving the hat to the player:\n\n");

	start->list_contents();
	player->list_contents();

	return 0;
}
