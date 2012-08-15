#ifndef CONTAINER_H
#define CONTAINER_H

#include <vector>
#include <item.h>

class container: public item
{
	std::vector<item*> contents;
public:
	int find_item(item*);
	int remove_item(item*);

	void list_contents();
};

#endif