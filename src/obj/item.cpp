#include <string>
#include <obj/item.h>
#include <obj/container.h>
#include <ctrl/event.h>

item::item()
{}

item::item(container* parent): parent(parent)
{
	parent->add_item(this);
}

int item::set_name(std::string new_name)
{
	name = new_name;
	return 0;
}

int item::set_desc(std::string new_desc)
{
	desc = new_desc;
	return 0;
}

std::string item::get_name()
{
	return name;
}

std::string item::get_desc()
{
	return desc;
}

std::string item::get_parent_name()
{
	return parent->get_name();
}

int item::find_event(std::string trigger)
{
	int size = events.size();

	for (int loc = 0; loc < size; loc++) {
		if (events[loc].find_trigger(trigger) < 0) {
			continue;
		} else {
			return loc;
		}
	}

	return -1;
}

int item::trigger_event(int loc)
{
	return events[loc].run();
}

int item::move(container* new_parent)
{
	int test = parent->remove_item(this);

	if (test < 0) {
		return test;
	}

	parent = new_parent;
	parent->add_item(this);

	return 0;
}