#include <string>
#include <item.h>
#include <container.h>

//Private
int item::set_parent(container* parent)
{
	this->parent = parent;
}

//Public
item::item()
{}

item::item(container* parent)
{
	this->parent = parent;
}

int item::set_name(std::string name)
{
	this->name = name;
	return 0;
}

int item::set_desc(std::string desc)
{
	this->desc = desc;
	return 0;
}

std::string item::get_name()
{
	return this->name;
}

std::string item::get_desc()
{
	return this->desc;
}

int item::give_to(container* parent)
{
	int test = this->parent->remove_item(this);

	if (test < 0) {
		return test;
	}

	this->parent = parent;
}