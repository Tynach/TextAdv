#include <iostream>
#include <world.h>
#include <item.h>
#include <mob.h>

using namespace std;

int main(int argc, char *argv[])
{
	world dungeon;
	dungeon.set_name("Dungeon");
	dungeon.set_desc("Icky dungeon :(");

	item hat(&dungeon);
	hat.set_name("Hat");
	hat.set_desc("An ugly hat.");

	mob player(&dungeon);
	player.set_name("Bob");
	player.set_desc("Human. Not very impressive.");

	dungeon.list_contents();
	player.list_contents();

	hat.move(&player);

	cout << "\nAfter moving the hat to the player:\n\n";

	dungeon.list_contents();
	player.list_contents();

	cout << "Everything worked! BUT WAIT O_O\n\n";

	return 0;
}