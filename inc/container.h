#ifndef CONTAINER_H
#define CONTAINER_H

#include <vector>
#include <item.h>

class container: public item
{
	std::vector<item*> contents;
public:
	container();
	container(container* parent);

	int find_item(item*);
	int add_item(item*);
	int remove_item(item*);

	void list_contents();
};

#endif