#ifndef CONTAINER_H
#define CONTAINER_H

#include <vector>
#include <obj/item.h>

class container: public item
{
	std::vector<item*> contents;

	int add_item(item*);
	int remove_item(item*);
public:
	container();
	container(container* parent);

	int find_item(item*);

	void list_contents();

	friend class item;
};

#endif