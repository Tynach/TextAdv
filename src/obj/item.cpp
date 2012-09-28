#include <cstdio>
#include <string>
#include <obj/item.h>
#include <my_exceptions.h>
#include <obj/container.h>

using std::fprintf;

item::item(container* new_parent): parent(new_parent)
{
	if (parent == 0) {
		return;
	}

	parent->add_item(*this);
}

item::item(container& new_parent): parent(&new_parent)
{
	parent->add_item(*this);
}

void item::set_name(std::string new_name)
{
	name = new_name;
}

void item::set_desc(std::string new_desc)
{
	desc = new_desc;
}

std::string item::get_name()
{
	return name;
}

std::string item::get_desc()
{
	return desc;
}

container& item::get_parent()
{
	return *parent;
}

void item::move(container& new_parent)
{
	try {
		parent->remove_item(*this);

		parent = &new_parent;
		parent->add_item(*this);
	} catch (std::exception& e) {
		fprintf(stderr, "Error: %s\n", e.what());
	}
}
