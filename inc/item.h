#ifndef ITEM_H
#define ITEM_H

#include <string>
class container;

class item
{
	std::string name;
	std::string desc;
	container* parent;

	int set_parent(container*);
public:
	item();
	item(container* parent);

	int set_name(std::string);
	int set_desc(std::string);

	std::string get_name();
	std::string get_desc();

	int give_to(container*);
};

#endif