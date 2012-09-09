#include <cstdio>
#include <string>
#include <obj/item.h>
#include <exception.h>
#include <obj/container.h>

item::item(container* new_parent = 0): parent(new_parent)
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

std::string item::get_parent_name()
{
	return parent->get_name();
}

void item::move(container& new_parent)
{
	try {
		parent->remove_item(*this);

		parent = &new_parent;
		parent->add_item(*this);
	} catch (exception& e) {
		fprintf(stderr, "Error: %s\n", e.message.c_str());
	}
}
