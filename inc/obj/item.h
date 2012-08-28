#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <vector>

class container;

class item
{
	std::string name;
	std::string desc;
	container* parent;
public:
	item(container& parent);

	int set_name(std::string);
	int set_desc(std::string);

	std::string get_name();
	std::string get_desc();
	std::string get_parent_name();

	int move(container&);
};

#endif