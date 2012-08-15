#include <string>
#include <item.h>
#include <container.h>

item::item()
{}

item::item(container* parent): parent(parent)
{
	parent->add_item(this);
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

std::string item::get_parent_name()
{
	return this->parent->get_name();
}

int item::move(container* parent)
{
	int test = this->parent->remove_item(this);

	if (test < 0) {
		return test;
	}

	this->parent = parent;
	this->parent->add_item(this);

	return 0;
}