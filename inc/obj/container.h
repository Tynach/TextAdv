#ifndef CONTAINER_H
#define CONTAINER_H

#include <vector>
#include <obj/item.h>

class container: public item
{
	std::vector<item*> contents;

	void add_item(item&);
	void remove_item(item&);
public:
	container(container* parent);

	int find_item(item&);
	void list_contents();

	friend class item;
};

#endif
