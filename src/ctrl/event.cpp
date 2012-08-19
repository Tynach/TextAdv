#include <string>
#include <ctrl/event.h>

event::event(std::string, ...)
{}

int event::find_trigger(std::string query)
{
	int size = triggers.size();

	for (int loc = 0; loc < size; loc++) {
		if (triggers[loc] == query) {
			return loc;
		}
	}

	return -1;
}

int event::run()
{}